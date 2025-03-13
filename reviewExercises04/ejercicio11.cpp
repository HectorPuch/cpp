#include <iostream>

#define INICIO 0
#define FIN 9

int main(){

	int numInput, resultado;

	std::cout << "Introduzca un numero: ";
	std::cin >> numInput;

	for (int i = INICIO; i <= FIN; i++)
	{
		resultado = numInput * i;
		std::cout << resultado << std::endl;
	}

	return 0;

}
