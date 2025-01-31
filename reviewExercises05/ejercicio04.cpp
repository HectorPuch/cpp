#include <iostream>

int main() {

	const int length = 5; // Longitud del loop for

	int array[5] = { 0, 1, 2, 3, 4 }; // Array de 5 valors inicialitzat

	int suma = 0; // Variable encarregada de la suma dels valors del array

	for (int i = 0; i < length; i++)
	{
		suma += array[i];
	}

	std::cout << "La suma del array es: " << suma;

	return 0;

}
