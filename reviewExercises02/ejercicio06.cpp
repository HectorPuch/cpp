#include <iostream>

int main() {

	int num1;
	int num2;
	int resultado;

	std::cout << "Introduce el primero n�mero:" << std::endl;
	std::cin >> num1;
	std::cout << "" << std::endl;

	std::cout << "Introduce el segundo n�mero:" << std::endl;
	std::cin >> num2;
	std::cout << "" << std::endl;

	resultado = num1 + num2;
	std::cout << "Este es el resultado de la suma del primer y el segundo n�mero: " << resultado << std::endl;

	resultado = num1 - num2;
	std::cout << "Este es el resultado de la resta del primer y el segundo n�mero: " << resultado << std::endl;

	resultado = num1 * num2;
	std::cout << "Este es el resultado de la multiplicaci�n del primer y el segundo n�mero: " << resultado << std::endl;

	resultado = num1 / num2;
	std::cout << "Este es el resultado de la suma de la divisi�n y el segundo n�mero: " << resultado << std::endl;

	resultado = num1 % num2;
	std::cout << "Este es el resultado del m�dulo del primer y el segundo n�mero: " << resultado << std::endl;

	return 0;
}