#include <iostream>

int main() {

	float euro;
	float euroYen = 162.857;
	float euroDollar = 1.03532;
	float euroPound = 0.827670;

	std::cout << "Introduzca la cantidad en Euro:" << std::endl;
	std::cin >> euro;
	std::cout << "" << std::endl;

	std::cout << euro << " " << "Euro equivalen a: " << euro * euroYen << " " << "Yen japonés" << std::endl;
	std::cout << "" << std::endl;

	std::cout << euro << " " << "Euro equivalen a: " << euro * euroDollar << " " << "Dólares estadounidenses" << std::endl;
	std::cout << "" << std::endl;

	std::cout << euro << " " << "Euro equivalen a: " << euro * euroPound << " " << "Libras esterlinas" << std::endl;
	std::cout << "" << std::endl;

	return 0;
}