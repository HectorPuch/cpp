#include <iostream>

int main() {

	float pagoPrimeraPersona;
	float pagoSegundaPersona;
	float pagoTerceraPersona;
	float totalCuenta;
	const float porcentaje = 100;

	std::cout << "Introduzca la cantidad aportada por la primera persona" << std::endl;
	std::cin >> pagoPrimeraPersona;
	std::cout << "" << std::endl;

	std::cout << "Introduzca la cantidad aportada por la segunda persona" << std::endl;
	std::cin >> pagoSegundaPersona;
	std::cout << "" << std::endl;

	std::cout << "Introduzca la cantidad aportada por la tercera persona" << std::endl;
	std::cin >> pagoTerceraPersona;
	std::cout << "" << std::endl;

	totalCuenta = pagoPrimeraPersona + pagoSegundaPersona + pagoTerceraPersona;
	std::cout << "Total: " << totalCuenta << " €" << std::endl;

	pagoPrimeraPersona /= totalCuenta / porcentaje;
	std::cout << "Porcentaje aportado por la primera persona: " << pagoPrimeraPersona << " %" << std::endl;

	pagoSegundaPersona /= totalCuenta / porcentaje;
	std::cout << "Porcentaje aportado por la segunda persona: " << pagoSegundaPersona << " %" << std::endl;

	pagoTerceraPersona /= totalCuenta / porcentaje;
	std::cout << "Porcentaje aportado por la tercera persona: " << pagoTerceraPersona << " %" << std::endl;

	return 0;
}