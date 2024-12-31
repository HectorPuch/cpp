#include <iostream>

int main() {

	int numeroUsuario;
	
	std::cout << "Introduzca un n�mero de 6 cifras:" << std::endl;
	std::cin >> numeroUsuario;
	std::cout << "" << std::endl;
	
	int unidades = numeroUsuario % 10;
	std::cout << "Estas son las unidades de su n�mero: " << unidades << std::endl;

	int decenas = (numeroUsuario / 10) % 10;
	std::cout << "Estas son las decenas de su n�mero: " << decenas << std::endl;

	int centenas = (numeroUsuario / 100) % 10;
	std::cout << "Estas son las centenas de su n�mero: " << centenas << std::endl;

	int unidadesMillar = (numeroUsuario / 1000) % 10;
	std::cout << "Estas son las unidades de millar de su n�mero: " << unidadesMillar << std::endl;

	int decenasMillar = (numeroUsuario / 10000) % 10;
	std::cout << "Estas son las decenas de millar de su n�mero: " << decenasMillar << std::endl;

	int centenasMillar = numeroUsuario / 100000;
	std::cout << "Estas son las centenas de millar de su n�mero: " << centenasMillar << std::endl;

	return 0;
}