#include <iostream>

int main() {

	int origen, final;

	std::cout << "Introduzca el numero de origen: ";
	std::cin >> origen;

	std::cout << "Introduzca el numero final: ";
	std::cin >> final;

	int resultado = origen; // Se inicializa con el valor de origen, ya que es el primer número del cálculo

	bool sumar = true; // Empezamos con suma después del primer número

	for (int i = origen + 1; i <= final; i++)
	{
		if (sumar)
		{
			resultado = resultado + i; // Suma
		}
		else
		{
			resultado = resultado * i; // Multiplicación
		}
		sumar = !sumar; // Alternar entre suma y multiplicación
	}

	std::cout << "El resultado del calculo es: " << resultado << std::endl;

	return 0;

}