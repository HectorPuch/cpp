#include <iostream>

int main() {

	int numeroUsuario;

	std::cout << "Introduzca un número:" << std::endl;
	std::cin >> numeroUsuario;
	std::cout << "" << std::endl;

	if (numeroUsuario % 2 == 0) {
		std::cout << "El número " << numeroUsuario << " es par." << std::endl;
	}
	else {
		std::cout << "El número " << numeroUsuario << " es impar." << std::endl;
	}

	return 0;
}