#include <iostream>

int main() {

	float metros;
	float millas;
	float yardas;
	float pies;
	float pulgadas;

	std::cout << "Introduzca la distancia en metros:" << std::endl;
	std::cin >> metros;
	std::cout << "" << std::endl;

	millas = metros * 0.0006213712;
	std::cout << metros << " metros = " << millas << " millas." << std::endl;

	yardas = metros * 1.093613;
	std::cout << metros << " metros = " << yardas << " yardas." << std::endl;

	pies = metros * 3.28084;
	std::cout << metros << " metros = " << pies << " pies." << std::endl;

	pulgadas = metros * 39.37008;
	std::cout << metros << " metros = " << pulgadas << " pulgadas." << std::endl;

	return 0;
}