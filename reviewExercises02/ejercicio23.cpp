#include <iostream>

int main() {

	float gradosFahrenheit;
	float gradosCelsius;

	std::cout << "Introduzca la temperatura en grados Fahrenheit:" << std::endl;
	std::cin >> gradosFahrenheit;
	std::cout << "" << std::endl;

	gradosCelsius = (gradosFahrenheit - 32) * 5 / 9;
	std::cout << gradosFahrenheit << " grados Fahrenheit equivalen a " << gradosCelsius << " grados Celsius." << std::endl;

	return 0;
}