#include <iostream>

int main() {

	const int length = 5;

	int array[5];
	
	// Creamos un bucle for que itere 5 veces para que el usuario introduzca 5 números
	for (int i = 0; i < length; i++)
	{
		std::cout << "Ingrese un número:" << std::endl;
		std::cin >> array[i];
	}

	// Mostramos los números proporcionados por el usuario
	for (int i = 0; i < length; i++)
	{
		std::cout << array[i] << " ";
	}

	std::cout << std::endl;

	return 0;

}