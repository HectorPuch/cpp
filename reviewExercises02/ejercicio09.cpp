#include <iostream>

int main() {

	float ladoCuadrado;
	float areaCuadrado;

	std::cout << "Introduzca el lado de un cuadrado:" << std::endl;
	std::cin >> ladoCuadrado;
	std::cout << "" << std::endl;

	areaCuadrado = ladoCuadrado * ladoCuadrado;
	std::cout << "El área del cuadrado es: " << areaCuadrado << std::endl;

	return 0;
}