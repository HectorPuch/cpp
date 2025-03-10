#include <iostream>

int main() {

	int edad, añoNacimiento;

	std::cout << "Introduzca su edad: ";
	std::cin >> edad;

	std::cout << "Introduzca su año de nacimiento: ";
	std::cin >> añoNacimiento;

	for (int i = añoNacimiento; i <= añoNacimiento + edad; i++)
	{
		if (i < añoNacimiento + edad)
		{
			std::cout << "En el año " << i << " tenia " << i - añoNacimiento << " años.\n";
		}
		else
		{
			std::cout << "En el año " << i << " tenie " << i - añoNacimiento << " años.\n";
		}
	}

	return 0;

}