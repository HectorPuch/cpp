#include <iostream>

int main() {

	int hora;
	int minutos;
	int segundos;
	int milisegundos;

	std::cout << "Introduzca la hora: " << std::endl;
	std::cin >> hora;
	std::cout << "" << std::endl;

	std::cout << "Introduzca los minutos: " << std::endl;
	std::cin >> minutos;
	std::cout << "" << std::endl;

	std::cout << "Introduzca los segundos: " << std::endl;
	std::cin >> segundos;
	std::cout << "" << std::endl;

	hora *= 60 * 60 * 1000;
	minutos *= 60 * 1000;
	segundos *= 1000;

	milisegundos = hora + minutos + segundos;
	std::cout << "Resultado en milisegundos: " << milisegundos << std::endl;

	return 0;
}