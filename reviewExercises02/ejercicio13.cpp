#include <iostream>

int main() {

	float gramos;
	float kilogramos;
	float miligramos;

	std::cout << "Introduzca la cantidad en gramos:" << std::endl;
	std::cin >> gramos;
	std::cout << "" << std::endl;

	kilogramos = gramos / 1000;
	std::cout << gramos << " gramos = " << kilogramos << " kilogramos." << std::endl;

	miligramos = gramos * 1000;
	std::cout << gramos << " gramos = " << miligramos << " miligramos." << std::endl;

	return 0;
}