#include <iostream>

int main() {

	float numerosUsuario, sumaNumeros = 0, contador = 0;

	bool continuar = true;

	while (continuar)
	{
		std::cout << "Introduzca un numero: ";
		std::cin >> numerosUsuario;

		std::cout << "Desea continuar añadiendo numeros?\n";
		std::cout << "0 - Salir.\n";
		std::cout << "1 - Continuar.\n";
		std::cin >> continuar;

		sumaNumeros += numerosUsuario;

		contador++;
	}

	std::cout << "Este es el promedio de los numeros añadidos: " << sumaNumeros / contador;

		return 0;

}
