#include <iostream>
#include <time.h>

int main() {

	srand(time(NULL));

	int numeroRandom = rand() % 991 + 10;

	std::cout << "Este es el número aleatorio entre 10 y 1000: " << numeroRandom;

	return 0;

}