#include <iostream>

int main() {

	std::string nombreUsuario;

	std::cout << "¿Cuál es tu nombre?" << std::endl;
	std::cin >> nombreUsuario;
	std::cout << "" << std::endl;

	std::cout << "Hola " << nombreUsuario << "!" << std::endl;

	return 0;
}