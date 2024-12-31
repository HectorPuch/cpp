#include <iostream>

int main() {

	int num1;
	int num2;
	int resultado;

	std::cout << "Introduce el primero número:" << std::endl;
	std::cin >> num1;
	std::cout << "" << std::endl;

	std::cout << "Introduce el segundo número:" << std::endl;
	std::cin >> num2;
	std::cout << "" << std::endl;

	resultado = num1 + num2;
	std::cout << "Este es el resultado de la suma del primer y el segundo número: " << resultado << std::endl;

	resultado = num1 - num2;
	std::cout << "Este es el resultado de la resta del primer y el segundo número: " << resultado << std::endl;

	resultado = num1 * num2;
	std::cout << "Este es el resultado de la multiplicación del primer y el segundo número: " << resultado << std::endl;

	resultado = num1 / num2;
	std::cout << "Este es el resultado de la suma de la división y el segundo número: " << resultado << std::endl;

	resultado = num1 % num2;
	std::cout << "Este es el resultado del módulo del primer y el segundo número: " << resultado << std::endl;

	return 0;
}