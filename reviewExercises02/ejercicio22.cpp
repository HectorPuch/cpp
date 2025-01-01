#include <iostream>

int main() {

	float gradosCelsius;
	float gradosFahrenheit;
	float gradosKelvin;

	std::cout << "Introduzca una temperatura en grados Celsius:" << std::endl;
	std::cin >> gradosCelsius;
	std::cout << "" << std::endl;

	gradosFahrenheit = (gradosCelsius * 1.8) + 32;
	std::cout << gradosCelsius << " grados Celsius equivalen a " << gradosFahrenheit << " grados Fahrenheit." << std::endl;

	gradosKelvin = gradosCelsius + 273.15;
	std::cout << gradosCelsius << " grados Celsius equivalen a " << gradosKelvin << " grados Kelvin." << std::endl;

	return 0;
}