#include <iostream>

int main() {

	int year;

	std::cout << "Introduzca un a�o:" << std::endl;
	std::cin >> year;
	std::cout << "" << std::endl;

	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
		std::cout << year << " es a�o bisiesto." << std::endl;
	}
	else {
		std::cout << year << " no es a�o bisiesto." << std::endl;
	}

	return 0;
}