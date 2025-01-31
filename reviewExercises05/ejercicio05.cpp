#include <iostream>

int main() {

	const int length = 5;

	int array[length] = { 5, 3, 7, 1, 4 }; 
	
	int numeroUsuario, resultado;

	std::cout << "Ingresa un número:" << std::endl;
	std::cin >> numeroUsuario;
	std::cout << std::endl;

	for (int i = 0; i < length; i++)
	{
		resultado = numeroUsuario * array[i];
		std::cout << numeroUsuario << " * " << array[i] << " = " << resultado << std::endl;
	}

	return 0;

}