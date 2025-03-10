#include <iostream>

int main() {

	std::string username = "Tr4ianus", password = "Roma12345.";

	std::string inputUsername, inputPassword;

	std::cout << "Introduzca su nombre de usuario: ";
	std::cin >> inputUsername;

	std::cout << "Introduzca su contraseña: ";
	std::cin >> inputPassword;

	if (inputUsername == username && inputPassword == password)
	{
		std::cout << "Ha introducido correctamente su nombre de usuario y contraseña.\n";
	}
	else if (inputUsername != username)
	{
		std::cout << "Nombre de usuario incorrecto.\n";
	}
	else if (inputPassword != password)
	{
		std::cout << "Contraseña incorrecta.\n";
	}
	else
	{
		std::cout << "Nombre de usuario o contraseña incorrectos.\n";
	}
	
	return 0;

}
