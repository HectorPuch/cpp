#include <iostream>

int main() {

	std::string user = "Tr4ianus", password = "Roma12345.";

	std::string inputUser, inputPassword;

	std::cout << "Introduzca su nombre de usuario: ";
	std::cin >> inputUser;

	std::cout << "Introduzca su contraseña: ";
	std::cin >> inputPassword;

	if (inputUser == user && inputPassword == password)
	{
		std::cout << "Ha introducido correctamente su nombre de usuario y contraseña.\n";
	}
	else if (inputUser != user)
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