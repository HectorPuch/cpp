#include <iostream>
#include <string>

int main() {

	std::string username = "Tr4ianus", password = "Roma12345.";

	std::string inputUsername, inputPassword;

	std::cout << "Introduzca su nombre de usuario: ";
	std::cin >> inputUsername;

	std::cout << "Introduzca su contraseņa: ";
	std::cin >> inputPassword;

	if (inputUsername == username && inputPassword == password)
	{
		std::cout << "Ha introducido correctamente su nombre de usuario y contraseņa.\n";
	}
	else if (inputUsername != username)
	{
		std::cout << "Nombre de usuario incorrecto.\n";
	}
	else if (inputPassword != password)
	{
		std::cout << "Contraseņa incorrecta.\n";
	}
	else
	{
		std::cout << "Nombre de usuario o contraseņa incorrectos.\n";
	}
	
	return 0;

}
