#include <iostream>

int main() {

	int milisegundos;
	int hora;
	int minutos;
	int segundos;

	std::cout << "Introduzca una cantidad de milisegundos:" << std::endl;
	std::cin >> milisegundos;
	std::cout << "" << std::endl;

	hora = milisegundos / (1000 * 60 * 60);
	std::cout << "Cantidad de horas: " << hora << std::endl;

	minutos = milisegundos / (1000 * 60);
	std::cout << "Cantidad de minutos: " << minutos << std::endl;

	segundos = milisegundos / 1000;
	std::cout << "Cantidad de segundos: " << segundos << std::endl;

	return 0;
}