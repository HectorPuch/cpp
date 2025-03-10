#include <iostream>

int main() {

	int num1, num2;

	std::cout << "Introduzca el primer numero:\n";
	std::cin >> num1;

	std::cout << "Introduzca el segundo numero:\n";
	std::cin >> num2;

	if (num1 > num2)
	{
		std::cout << num1 << " es mayor que " << num2 << ".\n";
	}
	else if (num2 > num1)
	{
		std::cout << num2 << " es mayor que " << num1 << ".\n";
	}
	else if (num1 == num2)
	{
		std::cout << num1 << " es igual que " << num2 << ".\n";
	}
	else
	{
		std::cout << num2 << " es igual que " << num1 << ".\n";
	}

	return 0;

}