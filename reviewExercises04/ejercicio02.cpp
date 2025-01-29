#include <iostream>

int main() {

	const int numeros = 50;

	for (int i = 0; i <= numeros; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << i << std::endl;
		}
	}

	return 0;

}