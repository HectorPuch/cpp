#include <iostream>

int main() {

    int userNumber;

	std::cout << "Introduzca un numero: ";
	std::cin >> userNumber;

	while (userNumber <= 0)
	{
		std::cout << "No se puede añadir un 0 o numeros negativos!\n";
		std::cout << "Introduzca un numero: ";
		std::cin >> userNumber;
	}

	for (int i = userNumber; i >= 0; i--)
	{
		std::cout << i << std::endl;
	}

    return 0;

}
