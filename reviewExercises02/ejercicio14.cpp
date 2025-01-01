#include <iostream>

int main() {

	float num1;
	float num2;
	float num3;
	float promedio;

	std::cout << "Introduzca el primer numero:" << std::endl;
	std::cin >> num1;
	std::cout << "" << std::endl;

	std::cout << "Introduzca el segundo numero:" << std::endl;
	std::cin >> num2;
	std::cout << "" << std::endl;

	std::cout << "Introduzca el tercer numero:" << std::endl;
	std::cin >> num3;
	std::cout << "" << std::endl;

	promedio = (num1 + num2 + num3) / 3;
	std::cout << "Este es el valor promedio de sus números: " << promedio << std::endl;

	return 0;
}