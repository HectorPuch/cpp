#include <iostream>

int main() {

	int numerosUsuario, resultadoPares = 0, resultadoImpares = 0;

	bool continuar = true;

	while (continuar)
	{
		std::cout << "Introduzca un numero: ";
		std::cin >> numerosUsuario;

		std::cout << "Desea continuar añadiendo numeros?\n";
		std::cout << "0 - Salir.\n";
		std::cout << "1 - Continuar.\n";
		std::cin >> continuar;

		if (numerosUsuario % 2 != 0)
		{
			resultadoImpares += numerosUsuario;
		}
		else
		{
			resultadoPares += numerosUsuario;
		}

		std::cout << std::endl;

		std::cout << "Resultado de la suma de los numeros impares: " << resultadoImpares << std::endl;
		std::cout << "Resultado de la suma de numeros pares: " << resultadoPares << std::endl;
	}

	return 0;

}
