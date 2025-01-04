#include <iostream>

int main() {

	int numeroDniUsuario;
	char letraDniUsuario;

	std::cout << "Introduzca el número de su DNI:" << std::endl;
	std::cin >> numeroDniUsuario;
	std::cout << "" << std::endl;

	std::cout << "Introduzca la letra de su DNI (en mayúscula):" << std::endl;
	std::cin >> letraDniUsuario;
	std::cout << "" << std::endl;

	int calculoNumeroDni = numeroDniUsuario % 23;
	char calculoLetraDni;

	switch (calculoNumeroDni)
	{
	case 0:calculoLetraDni = 'T';
		break;
	case 1:calculoLetraDni = 'R';
		break;
	case 2:calculoLetraDni = 'W';
		break;
	case 3:calculoLetraDni = 'A';
		break;
	case 4:calculoLetraDni = 'G';
		break;
	case 5:calculoLetraDni = 'M';
		break;
	case 6:calculoLetraDni = 'Y';
		break;
	case 7:calculoLetraDni = 'F';
		break;
	case 8:calculoLetraDni = 'P';
		break;
	case 9:calculoLetraDni = 'D';
		break;
	case 10:calculoLetraDni = 'X';
		break;
	case 11:calculoLetraDni = 'B';
		break;
	case 12:calculoLetraDni = 'N';
		break;
	case 13:calculoLetraDni = 'J';
		break;
	case 14:calculoLetraDni = 'Z';
		break;
	case 15:calculoLetraDni = 'S';
		break;
	case 16:calculoLetraDni = 'Q';
		break;
	case 17:calculoLetraDni = 'V';
		break;
	case 18:calculoLetraDni = 'H';
		break;
	case 19:calculoLetraDni = 'L';
		break;
	case 20:calculoLetraDni = 'C';
		break;
	case 21:calculoLetraDni = 'K';
		break;
	case 22:calculoLetraDni = 'E';
		break;

	}

	if (letraDniUsuario == calculoLetraDni) {
		std::cout << "La letra insertada corresponde con el número de DNI." << std::endl;
	}
	else {
		std::cout << "La letra insertada no corresponde con el número de DNI." << std::endl;
	}

	return 0;
}