#include <iostream>

int main() {

	bool interruptor1, interruptor2, interruptor3;

	std::cout << "El primer interruptor esta encendido o apagado?\n";
	std::cin >> interruptor1;

	std::cout << "El segundo interruptor esta encendido o apagado?\n";
	std::cin >> interruptor2;

	std::cout << "El tercer interruptor esta encendido o apagado?\n";
	std::cin >> interruptor3;

	if ((interruptor1 && interruptor2) || (interruptor2 && interruptor3))
	{
		std::cout << "La bombilla esta encendida.\n";
	}
	else
	{
		std::cout << "La bombilla esta apagada.\n";
	}

	return 0;

}