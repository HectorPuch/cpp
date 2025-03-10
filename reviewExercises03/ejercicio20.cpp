#include <iostream>

int main() {

	std::string ingrediente1 = "Hamburguesa", ingrediente2 = "Queso", ingrediente3 = "Lechuga", ingrediente4 = "Tomate", ingrediente5 = "Cebolla", ingrediente6 = "Bacon";
	bool seleccionado1, seleccionado2, seleccionado3, seleccionado4, seleccionado5, seleccionado6;

	std::cout << "Seleccione los ingredientes que desea (con un 1) y los que no (con un 0).\n";

	std::cout << ingrediente1 << " = ";
	std::cin >> seleccionado1;

	std::cout << ingrediente2 << " = ";
	std::cin >> seleccionado2;

	std::cout << ingrediente3 << " = ";
	std::cin >> seleccionado3;

	std::cout << ingrediente4 << " = ";
	std::cin >> seleccionado4;
	
	std::cout << ingrediente5 << " = ";
	std::cin >> seleccionado5;

	std::cout << ingrediente6 << " = ";
	std::cin >> seleccionado6;

	std::cout << std::endl;

	std::cout << "Ha elegido los siguientes ingredientes:\n";
	if (seleccionado1 == 1)
	{
		std::cout << ingrediente1 << std::endl;
	}
	if (seleccionado2 == 1)
	{
		std::cout << ingrediente2 << std::endl;
	}
	if (seleccionado3 == 1)
	{
		std::cout << ingrediente3 << std::endl;
	}
	if (seleccionado4 == 1)
	{
		std::cout << ingrediente4 << std::endl;
	}
	if (seleccionado5 == 1)
	{
		std::cout << ingrediente5 << std::endl;
	}
	if (seleccionado6 == 1)
	{
		std::cout << ingrediente6 << std::endl;
	}
	
	return 0;

}