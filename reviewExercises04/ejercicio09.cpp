#include <iostream>
#include <string>

int main() {

        std::string username = "Tr4ianus", password = "Admin12345.";
        std::string usernameInput, passwordInput;

        bool authentication = true;

        while (authentication)
        {
                std::cout << "Username: ";
                std::cin >> usernameInput;

                std::cout << "Password: ";
                std::cin >> passwordInput;

                if (usernameInput == username && passwordInput == password)
                {
                        std::cout << "Nombre de usuario y contraseņa correctos.\n";
                        authentication = false;
                }
                else if (usernameInput != username)
                {
                        std::cout << "Nombre de usuario incorrecto.\n";
                }
                else if (passwordInput != password)
                {
                        std::cout << "Contraseņa incorrecta.\n";
                }
                else
                {
                        std::cout << "Nombre de usuario y contraseņa incorrectos.\n";
                }
        }

        return 0;
