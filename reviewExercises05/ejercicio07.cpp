#include <iostream>
#include <array>

#define LENGTH 5

int main(){

	int array[LENGTH];

	int valorMaximo, valorMinimo, contador = 0;
	
	for (int i = 0; i <= LENGTH; i++)
	{
		if (contador == 0)
		{
			valorMaximo = i;
			valorMinimo = i;
		}
		if (i > valorMaximo)
		{
			valorMaximo = i;
			
		}
		else if (i < valorMinimo)
		{
			valorMinimo = i;
		}
		contador++;
	}

	std::cout << "Este es el valor maximo: " << valorMaximo << std::endl;
	std::cout << "Este es el valor minimo: " << valorMinimo << std::endl;

	return 0;

}
