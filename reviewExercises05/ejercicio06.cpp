#include <iostream>

#define LENGTH 5

int main() {

	int array[LENGTH];

	// Pedimos un número para cada posición del array y multiplicarlo por su índice
	for (int i = 0; i < LENGTH; i++)
	{
		std::cout << "Introduzca un numero para la posicion " << i << ": ";
		std::cin >> array[i]; // Guardamos el número ingresado por el usuario
		array[i] *= i; // Multiplicamos por la posición
	}

	std::cout << "Resultados:\n";

	for (int i = 0; i < LENGTH; i++)
	{
		std::cout << "Posicion " << i << ": " << array[i] << std::endl;
	}

	return 0;

}
