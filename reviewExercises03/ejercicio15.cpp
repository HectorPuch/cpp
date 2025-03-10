#include <iostream>
#include <time.h>

int main() {

	srand(time(NULL));

	int randomNumber = rand() % 20 + 1, userInput;

	std::cout << "-- Adivine el numero aleatorio entre 1 y 20. --\n";

	std::cout << "Primer intento:\n";
	std::cin >> userInput;

	if (userInput == randomNumber)
	{
		std::cout << "Correcto! El numero aleatorio es " << userInput << ".\n";
		exit(0);
	}
	else if (userInput < randomNumber)
	{
		std::cout << "Incorrecto! El numero aleatorio es mayor que " << userInput << ".\n";
	}
	else
	{
		std::cout << "Incorrecto! El numero aleatorio es menor que " << userInput << ".\n";
	}

	std::cout << "Segundo intento:\n";
	std::cin >> userInput;

	if (userInput == randomNumber)
	{
		std::cout << "Correcto! El numero aleatorio es " << userInput << ".\n";
		exit(0);
	}
	else if (userInput < randomNumber)
	{
		std::cout << "Incorrecto! El numero aleatorio es mayor que " << userInput << ".\n";
	}
	else
	{
		std::cout << "Incorrecto! El numero aleatorio es menor que " << userInput << ".\n";
	}

	std::cout << "Tercer intento:\n";
	std::cin >> userInput;

	if (userInput == randomNumber)
	{
		std::cout << "Correcto! El numero aleatorio es " << userInput << ".\n";
		exit(0);
	}
	else if (userInput < randomNumber)
	{
		std::cout << "Incorrecto! El numero aleatorio es mayor que " << userInput << ".\n";
	}
	else
	{
		std::cout << "Incorrecto! El numero aleatorio es menor que " << userInput << ".\n";
	}

	std::cout << "Cuarto intento:\n";
	std::cin >> userInput;

	if (userInput == randomNumber)
	{
		std::cout << "Correcto! El numero aleatorio es " << userInput << ".\n";
		exit(0);
	}
	else if (userInput < randomNumber)
	{
		std::cout << "Incorrecto! El numero aleatorio es mayor que " << userInput << ".\n";
	}
	else
	{
		std::cout << "Incorrecto! El numero aleatorio es menor que " << userInput << ".\n";
	}

	std::cout << "Quinto intento:\n";
	std::cin >> userInput;

	if (userInput == randomNumber)
	{
		std::cout << "Correcto! El numero aleatorio es " << userInput << ".\n";
		exit(0);
	}
	else if (userInput < randomNumber)
	{
		std::cout << "Incorrecto! El numero aleatorio es mayor que " << userInput << ".\n";
	}
	else
	{
		std::cout << "Incorrecto! El numero aleatorio es menor que " << userInput << ".\n";
	}

	return 0;

}