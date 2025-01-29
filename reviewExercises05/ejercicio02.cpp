#include <iostream>

int main() {

	const int filas = 3;
	const int columnas = 4;

	int matrix[filas][columnas] = {
		{10, 11, 12, 13},
		{14, 15, 16, 17},
		{18, 19, 20, 21}
	};

	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			std::cout << matrix[i][j] << " ";
		}

		std::cout << std::endl;

	}

	return 0;

}