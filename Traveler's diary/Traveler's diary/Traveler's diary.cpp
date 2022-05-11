
#include <iostream>
#include<string>
#include<fstream>


    char username[20];
    char password[20];

    
        char usernameAttempt[20];
        char passwordAttempt[20];

        void logIn()
        {
            std::cout << "Username: ";
            std::cin >> usernameAttempt;
            std::cout << "Password: ";
            std::cin >> passwordAttempt;


            std::ifstream check(usernameAttempt);
            check.open(usernameAttempt);
            if (!check.is_open())
            {
                std::cout << "This username is not found!";
            }
            else
            {
                check.getline(username, 20);
                check.getline(password, 20);

                if (username == usernameAttempt && password == passwordAttempt)
                {
                    std::cout << "Welcome";
                }
                else
                {
                    std::cout << "Wrong username or password!";
                }
            }


        };

        void Registration()
        {
            std::cout << "Username: ";
            std::cin >> username;
            std::cout << "Password: ";
            std::cin >> password;

            std::ofstream create;
            create.open(username);
            create << username << password;
            create.close();

        };

  


int main()
{
    int choice;
    std::cout << "----------------------Welcome-----------------" << '\n';
    std::cout << "----------------------------------------------" << '\n';
    std::cout << "Make your choice: " << '\n';
    std::cout << "1. Registration" << '\n';
    std::cout << "2. LogIn" "\n";

    std::cin >> choice;
    if (choice < 0 || choice > 3)
    {
        std::cout << "Error! Try again!";
    }
    else if (choice == 2)
    {
        logIn();
    }
    else if (choice == 1)
    {
        Registration();
    }

    

    return 0;
};

