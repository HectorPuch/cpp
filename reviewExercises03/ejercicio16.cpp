#include <iostream>

int main() {

	int yearOfOrigin, yearOfDestination;

	std::cout << "Introduzca un a�o de origen:\n";
	std::cin >> yearOfOrigin;

	std::cout << "Introduzca un a�o de destino:\n";
	std::cin >> yearOfDestination;

	if (yearOfOrigin == yearOfDestination)
	{
		std::cout << "Es el mismo a�o.\n";
	}
	else if (yearOfOrigin < yearOfDestination)
	{
		std::cout << "Faltan " << yearOfDestination - yearOfOrigin << " a�os para llegar.\n";
	}
	else
	{
		std::cout << "Han pasado " << yearOfOrigin - yearOfDestination << " a�os.\n";
	}

	return 0;

}