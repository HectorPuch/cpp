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

		if (usernameInput != username && passwordInput != password)
		{
			std::cout << "Nombre de usuario y contrase�a incorrectos.\n";
		}
		else if (usernameInput != username)
		{ 
			std::cout << "Nombre de usuario incorrecto.\n";
		}
		else if (passwordInput != password)
		{
			std::cout << "Contrase�a incorrecta.\n";
		}
		else
		{
			std::cout << "Correcto.\n";
			authentication = false;
		}

	}

	return 0;

}