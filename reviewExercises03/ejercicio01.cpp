#include <iostream>

int main() {

	int numeroUsuario;

	std::cout << "Introduzca un n�mero:" << std::endl;
	std::cin >> numeroUsuario;
	std::cout << "" << std::endl;

	if (numeroUsuario % 2 == 0) {
		std::cout << "El n�mero " << numeroUsuario << " es par." << std::endl;
	}
	else {
		std::cout << "El n�mero " << numeroUsuario << " es impar." << std::endl;
	}

	return 0;
}