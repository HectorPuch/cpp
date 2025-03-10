#include <iostream>

int main() {

	int edadUsuario;

	std::cout << "Introduce tu edad:\n";
	std::cin >> edadUsuario;

	if (edadUsuario >= 18)
	{
		std::cout << "Eres mayor de edad.\n";
	}
	else
	{
		std::cout << "Eres menor de edad.\n";
	}

	return 0;

}