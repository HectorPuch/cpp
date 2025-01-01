#include <iostream>

int main() {

	float cantidad;
	float tasasInteres;
	int meses;
	float intereses;
	float totalIntereses;

	std::cout << "Introduzca una cantidad económica:" << std::endl;
	std::cin >> cantidad;
	std::cout << "" << std::endl;

	std::cout << "Introduzca unas tasas de interés:" << std::endl;
	std::cin >> tasasInteres;
	std::cout << "" << std::endl;

	std::cout << "Introduzca unos meses:" << std::endl;
	std::cin >> meses;
	std::cout << "" << std::endl;

	tasasInteres /= 100;
	intereses = cantidad * tasasInteres * meses;
	totalIntereses = cantidad + intereses;
	std::cout << "Esta es la cantidad de intereses: " << intereses << " €" << std::endl;
	std::cout << "Esta es la cantidad total con intereses: " << totalIntereses << " €" << std::endl;

	return 0;
}