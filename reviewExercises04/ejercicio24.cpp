#include <iostream>

int main() {
	
	int squareSize;

	std::cout << "Introduzca el tamaño de su cuadrado: ";
	std::cin >> squareSize;

	for (int i = 0; i < squareSize; i++)
	{
		for (int i = 0; i < squareSize; i++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	return 0;

}
