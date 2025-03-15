#include <iostream>

int main() {

	int numeroUsuario, numeroMayor, numeroMenor, contador = 0;

	int continuar = 1;

	do
	{
		std::cout << "Introduzca un numero: ";
		std::cin >> numeroUsuario;

		std::cout << "Desea seguir introduciendo numeros?\n";
		std::cout << "0 - Salir.\n";
		std::cout << "1 - Continuar.\n";
		std::cin >> continuar;

		while (continuar < 0 || continuar > 1)
		{
			std::cout << "Numero incorrecto!\n";
			std::cout << "0 - Salir.\n";
			std::cout << "1 - Continuar.\n";
			std::cin >> continuar;
		}

		if (contador == 0)
		{
			numeroMayor = numeroUsuario;
			numeroMenor = numeroUsuario;
		}

		if (numeroUsuario > numeroMayor)
		{
			numeroMayor = numeroUsuario;
		}
		else if (numeroUsuario < numeroMenor)
		{
			numeroMenor = numeroUsuario;
		}

		contador++;

	} while (continuar == 1);

	std::cout << "Este es el numero mayor: " << numeroMayor << std::endl;
	std::cout << "Este es el numero menor: " << numeroMenor << std::endl;

	return 0;

}
