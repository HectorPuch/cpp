#include <iostream>

int main() {

	int numero;

	std::cout << "Introduzca un numero:\n";
	std::cin >> numero;

	int factorial = 1;

	for (int i = 1; i <= numero; i++)
	{
		factorial = factorial * i;
	}

	std::cout << "El factorial de " << numero << " es " << factorial << ".\n";

	return 0;

}