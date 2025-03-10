#include <iostream>

int main() {

	int yearOfOrigin, yearOfDestination;

	std::cout << "Introduzca un año de origen:\n";
	std::cin >> yearOfOrigin;

	std::cout << "Introduzca un año de destino:\n";
	std::cin >> yearOfDestination;

	if (yearOfOrigin == yearOfDestination)
	{
		std::cout << "Es el mismo año.\n";
	}
	else if (yearOfOrigin < yearOfDestination)
	{
		std::cout << "Faltan " << yearOfDestination - yearOfOrigin << " años para llegar.\n";
	}
	else
	{
		std::cout << "Han pasado " << yearOfOrigin - yearOfDestination << " años.\n";
	}

	return 0;

}