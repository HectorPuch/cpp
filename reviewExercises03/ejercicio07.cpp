#include <iostream>

int main() {

	int numeroUsuario;

	std::cout << "Introduzca un número del 1 al 12:" << std::endl;
	std::cin >> numeroUsuario;
	std::cout << "" << std::endl;

	switch (numeroUsuario) 
	{
	case 1:
		std::cout << "Enero tiene 31 días." << std::endl;
		break;
	case 2:
		std::cout << "Enero tiene 28 días (29 si es año bisiesto)." << std::endl;
		break;
	case 3:
		std::cout << "Enero tiene 31 días." << std::endl;
		break;
	case 4:
		std::cout << "Enero tiene 30 días." << std::endl;
		break;
	case 5:
		std::cout << "Enero tiene 31 días." << std::endl;
		break;
	case 6:
		std::cout << "Enero tiene 30 días." << std::endl;
		break;
	case 7:
		std::cout << "Enero tiene 31 días." << std::endl;
		break;
	case 8:
		std::cout << "Enero tiene 31 días." << std::endl;
		break;
	case 9:
		std::cout << "Enero tiene 30 días." << std::endl;
		break;
	case 10:
		std::cout << "Enero tiene 31 días." << std::endl;
		break;
	case 11:
		std::cout << "Enero tiene 30 días." << std::endl;
		break;
	case 12:
		std::cout << "Enero tiene 31 días." << std::endl;
		break;
	}

	return 0;
}