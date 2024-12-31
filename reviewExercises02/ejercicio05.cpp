#include <iostream>

int main() {

	std::string nombreUsuario;
	unsigned short edadUsuario;
	std::string calleUsuario;
	unsigned short numeroCalleUsuario;

	std::cout << "Dime tu nombre" << std::endl;
	std::cin >> nombreUsuario;
	std::cout << std::endl;

	std::cout << "Dime tu edad" << std::endl;
	std::cin >> edadUsuario;
	std::cout << std::endl;

	std::cout << "Dime tu calle" << std::endl;
	std::cin >> calleUsuario;
	std::cout << std::endl;

	std::cout << "Dime numero de calle" << std::endl;
	std::cin >> numeroCalleUsuario;
	std::cout << std::endl;

	std::cout << "===============" << std::endl;
	std::cout << "   Sus Datos   " << std::endl;
	std::cout << "===============" << std::endl;
	std::cout << std::endl;

	std::cout << "Su nombre es: " << nombreUsuario << std::endl;
	std::cout << "Su edad es: " << edadUsuario << std::endl;
	std::cout << "Usted vive en: " << calleUsuario << " " << numeroCalleUsuario << std::endl;

	return 0;
}