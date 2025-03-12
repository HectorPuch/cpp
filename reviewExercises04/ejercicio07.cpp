#include <iostream>

int main(){

	int numsMostrar, saltoNums;

	std::cout << "Introduzca el primer numero: ";
	std::cin >> numsMostrar;

	std::cout << "Introduzca el segundo numero: ";
	std::cin >> saltoNums;
	
	int resultado = 0;

	for (int i = 0; i < numsMostrar; i++)
	{
		std::cout << resultado << std::endl;
		resultado += saltoNums;
	}

	return 0;
}
