#include <iostream>

int main() {

	float gradosFahrenheit;
	float gradosKelvin;

	std::cout << "Introduzca la temperatura en grados Fahrenheit:" << std::endl;
	std::cin >> gradosFahrenheit;
	std::cout << "" << std::endl;

	gradosKelvin = ((gradosFahrenheit - 32) / 1.8) + 273.15;
	std::cout << gradosFahrenheit << " grados Fahrenheit equivalen a " << gradosKelvin << " grados Kelvin." << std::endl;

	return 0;
}