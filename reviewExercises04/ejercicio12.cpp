#include <iostream>


int main() {

	for (int i = 1; i <= 10; i++)
	{
		std::cout << "Tabla del " << i << ":" << std::endl;

		for (int j = 0; j <= 10; j++)
		{
			std::cout << i << " * " << j << " = " << i * j << std::endl;
		}
	}

	return 0;

}
