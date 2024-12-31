#include <iostream>

int main() {

	int numeroUsuario;

	std::cout << "Introduzca un número:" << std::endl;
	std::cin >> numeroUsuario;
	std::cout << "" << std::endl;

	numeroUsuario = -numeroUsuario;
	std::cout << "Su valor negado es: " << numeroUsuario << std::endl;

	return 0;
}