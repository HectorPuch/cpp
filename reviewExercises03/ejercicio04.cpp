#include <iostream>

int main() {

	int year;

	std::cout << "Introduzca un año:" << std::endl;
	std::cin >> year;
	std::cout << "" << std::endl;

	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
		std::cout << year << " es año bisiesto." << std::endl;
	}
	else {
		std::cout << year << " no es año bisiesto." << std::endl;
	}

	return 0;
}