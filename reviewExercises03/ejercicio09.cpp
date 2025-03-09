#include <iostream>
#include <string>

int main() {

	std::string ingrediente1 = "patata", ingrediente2 = "huevo", ingrediente3 = "cebolla", ingrediente4 = "aceite", ingrediente5 = "sal";

	std::string userInput;

	std::cout << "Introduce todos los ingredientes de una tortilla de patatas (incluyendo la cebolla)." << std::endl;

	std::cout << "Primer ingrediente:" << std::endl;
	std::cin >> userInput;

	bool mencionado1 = false, mencionado2 = false, mencionado3 = false, mencionado4 = false, mencionado5 = false;

	if (userInput == ingrediente1 && !mencionado1)
	{
		mencionado1 = true;
	}
	else if (userInput == ingrediente2 && !mencionado2)
	{
		mencionado2 = true;
	}
	else if (userInput == ingrediente3 && !mencionado3)
	{
		mencionado3 = true;
	}
	else if (userInput == ingrediente4 && !mencionado4)
	{
		mencionado4 = true;
	}
	else if (userInput == ingrediente5 && !mencionado5)
	{
		mencionado5 = true;
	}
	else if (userInput == ingrediente1 && mencionado1 || userInput == ingrediente2 && mencionado2 || userInput == ingrediente3 && mencionado3 || userInput == ingrediente4 && mencionado4 || userInput == ingrediente5 && mencionado5)
	{
		std::cout << "Ingrediente repetido." << std::endl;
	}
	else
	{
		std::cout << "La tortilla de patatas no lleva ese ingrediente." << std::endl;
	}
	
	std::cout << "Segundo ingrediente:" << std::endl;
	std::cin >> userInput;

	if (userInput == ingrediente1 && !mencionado1)
	{
		mencionado1 = true;
	}
	else if (userInput == ingrediente2 && !mencionado2)
	{
		mencionado2 = true;
	}
	else if (userInput == ingrediente3 && !mencionado3)
	{
		mencionado3 = true;
	}
	else if (userInput == ingrediente4 && !mencionado4)
	{
		mencionado4 = true;
	}
	else if (userInput == ingrediente5 && !mencionado5)
	{
		mencionado5 = true;
	}
	else if (userInput == ingrediente1 && mencionado1 || userInput == ingrediente2 && mencionado2 || userInput == ingrediente3 && mencionado3 || userInput == ingrediente4 && mencionado4 || userInput == ingrediente5 && mencionado5)
	{
		std::cout << "Ingrediente repetido." << std::endl;
	}
	else
	{
		std::cout << "La tortilla de patatas no lleva ese ingrediente." << std::endl;
	}

	std::cout << "Tercer ingrediente:" << std::endl;
	std::cin >> userInput;

	if (userInput == ingrediente1 && !mencionado1)
	{
		mencionado1 = true;
	}
	else if (userInput == ingrediente2 && !mencionado2)
	{
		mencionado2 = true;
	}
	else if (userInput == ingrediente3 && !mencionado3)
	{
		mencionado3 = true;
	}
	else if (userInput == ingrediente4 && !mencionado4)
	{
		mencionado4 = true;
	}
	else if (userInput == ingrediente5 && !mencionado5)
	{
		mencionado5 = true;
	}
	else if (userInput == ingrediente1 && mencionado1 || userInput == ingrediente2 && mencionado2 || userInput == ingrediente3 && mencionado3 || userInput == ingrediente4 && mencionado4 || userInput == ingrediente5 && mencionado5)
	{
		std::cout << "Ingrediente repetido." << std::endl;
	}
	else
	{
		std::cout << "La tortilla de patatas no lleva ese ingrediente." << std::endl;
	}

	std::cout << "Cuarto ingrediente:" << std::endl;
	std::cin >> userInput;

	if (userInput == ingrediente1 && !mencionado1)
	{
		mencionado1 = true;
	}
	else if (userInput == ingrediente2 && !mencionado2)
	{
		mencionado2 = true;
	}
	else if (userInput == ingrediente3 && !mencionado3)
	{
		mencionado3 = true;
	}
	else if (userInput == ingrediente4 && !mencionado4)
	{
		mencionado4 = true;
	}
	else if (userInput == ingrediente5 && !mencionado5)
	{
		mencionado5 = true;
	}
	else if (userInput == ingrediente1 && mencionado1 || userInput == ingrediente2 && mencionado2 || userInput == ingrediente3 && mencionado3 || userInput == ingrediente4 && mencionado4 || userInput == ingrediente5 && mencionado5)
	{
		std::cout << "Ingrediente repetido." << std::endl;
	}
	else
	{
		std::cout << "La tortilla de patatas no lleva ese ingrediente." << std::endl;
	}

	std::cout << "Quinto ingrediente:" << std::endl;
	std::cin >> userInput;

	if (userInput == ingrediente1 && !mencionado1)
	{
		mencionado1 = true;
	}
	else if (userInput == ingrediente2 && !mencionado2)
	{
		mencionado2 = true;
	}
	else if (userInput == ingrediente3 && !mencionado3)
	{
		mencionado3 = true;
	}
	else if (userInput == ingrediente4 && !mencionado4)
	{
		mencionado4 = true;
	}
	else if (userInput == ingrediente5 && !mencionado5)
	{
		mencionado5 = true;
	}
	else if (userInput == ingrediente1 && mencionado1 || userInput == ingrediente2 && mencionado2 || userInput == ingrediente3 && mencionado3 || userInput == ingrediente4 && mencionado4 || userInput == ingrediente5 && mencionado5)
	{
		std::cout << "Ingrediente repetido." << std::endl;
	}
	else
	{
		std::cout << "La tortilla de patatas no lleva ese ingrediente." << std::endl;
	}

	if (mencionado1 && mencionado2 && mencionado3 && mencionado4 && mencionado5)
	{
		std::cout << "Enhorabuena, has introducido todos los ingredientes necesarios para hacer una tortilla de patatas." << std::endl;
	}
	else
	{
		std::cout << "No has introducido todos los ingredientes necesarios para hacer una tortilla de patatas." << std::endl;
	}

	return 0;

}