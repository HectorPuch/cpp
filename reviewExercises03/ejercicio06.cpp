#include <iostream>

int main() {

	float primerLadoTriangulo;
	float segundoLadoTriangulo;
	float tercerLadoTriangulo;

	std::cout << "Introduzca el primer lado de un tri�ngulo:" << std::endl;
	std::cin >> primerLadoTriangulo;
	std::cout << "" << std::endl;

	std::cout << "Introduzca el segundo lado de un tri�ngulo:" << std::endl;
	std::cin >> segundoLadoTriangulo;
	std::cout << "" << std::endl;

	std::cout << "Introduzca el tercer lado de un tri�ngulo:" << std::endl;
	std::cin >> tercerLadoTriangulo;
	std::cout << "" << std::endl;

	if (primerLadoTriangulo == segundoLadoTriangulo && segundoLadoTriangulo == tercerLadoTriangulo) {
		std::cout << "Es un tri�ngulo equilatero." << std::endl;
	}
	else if (primerLadoTriangulo == segundoLadoTriangulo || primerLadoTriangulo == tercerLadoTriangulo || segundoLadoTriangulo == tercerLadoTriangulo) {
		std::cout << "Es un tri�ngulo is�sceles." << std::endl;
	}
	else {
		std::cout << "Es un tri�ngulo escaleno." << std::endl;
	}

	return 0;
}