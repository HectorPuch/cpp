#include <iostream>

int main() {

	std::string nombreUsuario;
	unsigned short edadUsuario;
	std::string comidaFavoritaUsuario;

	std::cout << "¿Cuál es su nombre?" << std::endl;
	std::cin >> nombreUsuario;
	std::cout << "" << std::endl;
	
	std::cout << "¿Cuál es su edad?" << std::endl;
	std::cin >> edadUsuario;
	std::cout << "" << std::endl;
	
	std::cout << "¿Cuál es su comida favorita?" << std::endl;
	std::cin >> comidaFavoritaUsuario;
	std::cout << "" << std::endl;

	std::cout << "Su nombre es: " << nombreUsuario << std::endl;
	std::cout << "Su edad es: " << edadUsuario << std::endl;
	std::cout << "Su comida favorita es: " << comidaFavoritaUsuario << std::endl;

	return 0;
}