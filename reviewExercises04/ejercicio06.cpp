#include <iostream>

int main() {

	int edad, a�oNacimiento;

	std::cout << "Introduzca su edad: ";
	std::cin >> edad;

	std::cout << "Introduzca su a�o de nacimiento: ";
	std::cin >> a�oNacimiento;

	for (int i = a�oNacimiento; i <= a�oNacimiento + edad; i++)
	{
		if (i < a�oNacimiento + edad)
		{
			std::cout << "En el a�o " << i << " tenia " << i - a�oNacimiento << " a�os.\n";
		}
		else
		{
			std::cout << "En el a�o " << i << " tenie " << i - a�oNacimiento << " a�os.\n";
		}
	}

	return 0;

}