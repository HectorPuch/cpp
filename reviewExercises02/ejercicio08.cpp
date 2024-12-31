#include <iostream>

int main() {

	int numeroUsuario;
	
	std::cout << "Introduzca un número de 6 cifras:" << std::endl;
	std::cin >> numeroUsuario;
	std::cout << "" << std::endl;
	
	int unidades = numeroUsuario % 10;
	std::cout << "Estas son las unidades de su número: " << unidades << std::endl;

	int decenas = (numeroUsuario / 10) % 10;
	std::cout << "Estas son las decenas de su número: " << decenas << std::endl;

	int centenas = (numeroUsuario / 100) % 10;
	std::cout << "Estas son las centenas de su número: " << centenas << std::endl;

	int unidadesMillar = (numeroUsuario / 1000) % 10;
	std::cout << "Estas son las unidades de millar de su número: " << unidadesMillar << std::endl;

	int decenasMillar = (numeroUsuario / 10000) % 10;
	std::cout << "Estas son las decenas de millar de su número: " << decenasMillar << std::endl;

	int centenasMillar = numeroUsuario / 100000;
	std::cout << "Estas son las centenas de millar de su número: " << centenasMillar << std::endl;

	return 0;
}