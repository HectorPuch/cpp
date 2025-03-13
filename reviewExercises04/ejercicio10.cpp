#include <iostream>

int main(){

	int numero, resultado = 0;

	bool suma = true;

	do
	{
		std::cout << "Introduzca un numero: ";
		std::cin >> numero;

		resultado += numero;

		std::cout << "Quiere seguir sumando numeros?\n";
		std::cout << "0 - Salir.\n";
		std::cout << "1 - Continuar.\n";
		std::cin >> suma;
	
	} while (suma);

	std::cout << "El resultado de su suma es: " << resultado;

	return 0;

}
