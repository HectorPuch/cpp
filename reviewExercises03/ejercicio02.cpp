#include <iostream>

int main() {

	int numeroUsuario;

	std::cout << "Introduzca un n�mero:" << std::endl;
	std::cin >> numeroUsuario;
	std::cout << "" << std::endl;

	if (numeroUsuario > 0) {
		std::cout << "El n�mero " << numeroUsuario << " es positivo." << std::endl;
	}
	else if (numeroUsuario < 0) {
		std::cout << "El n�mero " << numeroUsuario << " es negativo." << std::endl;
	}
	else {
		std::cout << "El n�mero es cero" << std::endl;
	}

	return 0;
}