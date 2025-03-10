#include <iostream>

int main() {

	char userInput;

	std::cout << "Introduzca una letra (en minusculas):\n";
	std::cin >> userInput;

	if (userInput == 'a' || userInput == 'e' || userInput == 'i' || userInput == 'o' || userInput == 'u')
	{
		std::cout << "La letra es una vocal.\n";
	}
	else
	{
		std::cout << "La letra es una consonante.\n";
	}

	return 0;

}