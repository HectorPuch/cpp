#include <iostream>

int main() {

	int numeroUsuario;

	std::cout << "Introduzca un número:" << std::endl;
	std::cin >> numeroUsuario;
	std::cout << "" << std::endl;

	if (numeroUsuario > 0) {
		std::cout << "El número " << numeroUsuario << " es positivo." << std::endl;
	}
	else if (numeroUsuario < 0) {
		std::cout << "El número " << numeroUsuario << " es negativo." << std::endl;
	}
	else {
		std::cout << "El número es cero" << std::endl;
	}

	return 0;
}