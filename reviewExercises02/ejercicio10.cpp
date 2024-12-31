#include <iostream>
#include <cmath>

int main() {

	float radioCirculo;
	float areaCirculo;
	float perimetroCirculo;
	const float PI = 3.14159;

	std::cout << "Introduzca el radio de un círculo:" << std::endl;
	std::cin >> radioCirculo;
	std::cout << "" << std::endl;

	areaCirculo = PI * pow(radioCirculo, 2);
	std::cout << "Esta es el área de un círculo: " << areaCirculo << std::endl;

	perimetroCirculo = 2 * PI * radioCirculo;
	std::cout << "Este es el perímetro de un círculo: " << perimetroCirculo << std::endl;

	return 0;
}