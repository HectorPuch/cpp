#include <iostream>

int main() {

	float num1, num2;

	std::cout << "Introduzca el primer numero:\n";
	std::cin >> num1;

	std::cout << "Introduzca el segundo numero:\n";
	std::cin >> num2;

	if (num2 != 0)
	{
		std::cout << "Este es el resultado de su division: " << num1 / num2;
		
	}
	else
	{
		std::cout << "No se puede dividir entre 0.\n";
	}

	return 0;

}