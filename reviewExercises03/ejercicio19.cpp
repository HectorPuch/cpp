#include <iostream>

int main() {

	std::string user = "Tr4ianus", password = "Roma12345.";

	std::string inputUser, inputPassword;

	std::cout << "Introduzca su nombre de usuario: ";
	std::cin >> inputUser;

	std::cout << "Introduzca su contrase�a: ";
	std::cin >> inputPassword;

	if (inputUser == user && inputPassword == password)
	{
		std::cout << "Ha introducido correctamente su nombre de usuario y contrase�a.\n";
	}
	else if (inputUser != user)
	{
		std::cout << "Nombre de usuario incorrecto.\n";
	}
	else if (inputPassword != password)
	{
		std::cout << "Contrase�a incorrecta.\n";
	}
	else
	{
		std::cout << "Nombre de usuario o contrase�a incorrectos.\n";
	}
	
	return 0;

}