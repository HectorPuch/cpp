#include <iostream>

int main() {

	int velocidad;
	int tiempo;
	int distancia;

	std::cout << "Introduzca su velocidad en km/h:" << std::endl;
	std::cin >> velocidad;
	std::cout << "" << std::endl;

	std::cout << "Introduzca su tiempo en horas:" << std::endl;
	std::cin >> tiempo;
	std::cout << "" << std::endl;

	distancia = (velocidad * 1000) * tiempo;
	std::cout << "Habrá recorrido " << distancia << " metros." << std::endl;

	return 0;
}