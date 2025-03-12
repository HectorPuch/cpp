#include <iostream>

int main(){

	char userInput;

	bool alternar = true, esVocal, anteriorEsVocal;

	int contador = 0;

	while (alternar)
	{
		std::cout << "Introduzca una letra (vocal o consonante): ";
		std::cin >> userInput;
		
		if (userInput == 'a' || userInput == 'e'|| userInput == 'i' || userInput == 'o' || userInput == 'u')
		{
			std::cout << "Es vocal: " << userInput << std::endl;
			esVocal = true;
		}
		else
		{
			std::cout << "Es consonante: " << userInput << std::endl;
			esVocal = false;
		}

		if (contador > 0)
		{
			if (anteriorEsVocal == esVocal)
			{
				alternar = false;
			}
			
		}

		contador++;
		anteriorEsVocal = esVocal;

	}

	return 0;

}
