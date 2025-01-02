#include <iostream>

int main() {

	int num1;
	int num2;

	std::cout << "Introduzca el primer número par:" << std::endl;
	std::cin >> num1;
	std::cout << "" << std::endl;

	std::cout << "Introduzca el primer número par:" << std::endl;
	std::cin >> num2;
	std::cout << "" << std::endl;

	if (num1 % 2 == 0 && num2 % 2 == 0) {
		std::cout << "Este es el resultado de la suma de los dos números: " << num1 + num2 << std::endl;
	}
	else {
		std::cout << "Este es el resultado de la resta de los dos números: " << num1 - num2 << std::endl;
	}

	return 0;
}