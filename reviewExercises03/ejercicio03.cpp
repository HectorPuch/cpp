#include <iostream>

int main() {

	int num1;
	int num2;

	std::cout << "Introduzca el primer número:" << std::endl;
	std::cin >> num1;
	std::cout << "" << std::endl;

	std::cout << "Introduzca el segundo número:" << std::endl;
	std::cin >> num2;
	std::cout << "" << std::endl;

	if (num1 % num2 == 0) {
		std::cout << num1 << " es multiplo de " << num2 << std::endl;
	}
	else
	{
		std::cout << num1 << " no es multiplo de " << num2 << std::endl;
	}

	return 0;
}