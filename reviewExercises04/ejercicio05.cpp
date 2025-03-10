#include <iostream>

int main() {

	float base, exponente;

	std::cout << "Introduzca la base: ";
	std::cin >> base;

	std::cout << "Introduzca el exponente: ";
	std::cin >> exponente;

	float resultado = 1;

	for (int i = 1; i <= exponente; i++)
	{
		resultado *= base;
	}

	std::cout << "El resultado de " << base << " elevado a " << exponente << " es: " << resultado;
	
	return 0;

}