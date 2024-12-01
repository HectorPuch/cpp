#include <iostream>

void main() {

#pragma region ejercicio1

	short numeroUsuario;

	std::cout << "Introduce un numero: ";
	std::cin >> numeroUsuario;

	if (numeroUsuario % 2 == 0) {
		std::cout << "El numero " << numeroUsuario << " es par.";
	}

	else {
		std::cout << "El numero " << numeroUsuario << " es impar.";
	}

#pragma endregion

#pragma region ejercicio2

	short numeroUsuario;

	std::cout << "Introduce un numero: ";
	std::cin >> numeroUsuario;


	if (numeroUsuario > 0) {
		std::cout << "El numero introducido es positivo.";
	}

	else if (numeroUsuario < 0) {
		std::cout << "El numero introducido es negativo.";
	}

	else {
		std::cout << "El numero introducido es cero.";
	}

#pragma endregion

}