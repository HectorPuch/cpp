#include <iostream>
#include <time.h>

int main() {

	srand(time(NULL));

	int num1 = rand() % 10 + 1, num2 = rand() % 10 + 1;
	int resultado;

	std::cout << "Cual es el resultado de multiplicar " << num1 << " * " << num2 << " ?\n";
	std::cin >> resultado;

	if (resultado == (num1 * num2))
	{
		std::cout << "Correcto!\n";
	}
	else
	{
		std::cout << "Incorrecto! El resultado correcto es " << num1 * num2 << ".\n";
	}

	return 0;

}
