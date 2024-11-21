#include <iostream>

void main() {
#pragma region ejercicio1
	std::cout << "Hello World";
#pragma endregion

#pragma region ejercicio2
	std::cout << "Texto1 Texto2";
#pragma endregion

#pragma region ejercicio3
	std::string nombreUsuario;
	std::cout << "¿Cual es tu nombre de usuario?" << std::endl;
	std::cin >> nombreUsuario;
	std::cout << "Bienvenido " << nombreUsuario;
#pragma endregion

#pragma region ejercicio4
	std::string nombreUsuario;
	short edadUsuario;
	std::string comidaFavorita;

	std::cout << "Cual es tu nombre?" << std::endl;
	std::cin >> nombreUsuario;

	std::cout << "Cual es tu edad?" << std::endl;
	std::cin >> edadUsuario;

	std::cout << "Cual es tu comida favorita?" << std::endl;
	std::cin >> comidaFavorita;

	std::cout << "Tu nombre es: " << nombreUsuario << std::endl;
	std::cout << "Tu edad es: " << edadUsuario << std::endl;
	std::cout << "Tu comida favorita es: " << comidaFavorita << std::endl;
#pragma endregion

#pragma region ejercicio5
	std::string nombreUsuario;
	short edadUsuario;
	std::string calleUsuario;
	short numeroCalleUsuario;

	std::cout << "Dime tu nombre" << std::endl;
	std::cin >> nombreUsuario;
	std::cout << std::endl;

	std::cout << "Dime tu edad" << std::endl;
	std::cin >> edadUsuario;
	std::cout << std::endl;

	std::cout << "Dime tu calle" << std::endl;
	std::cin >> calleUsuario;
	std::cout << std::endl;

	std::cout << "Dime numero de calle" << std::endl;
	std::cin >> numeroCalleUsuario;
	std::cout << std::endl;

	std::cout << "===============" << std::endl;
	std::cout << "   Sus Datos   " << std::endl;
	std::cout << "===============" << std::endl;
	std::cout << std::endl;

	std::cout << "Su nombre es: " << nombreUsuario << std::endl;
	std::cout << "Su edad es: " << edadUsuario << std::endl;
	std::cout << "Usted vive en: " << calleUsuario << " " << numeroCalleUsuario << std::endl;
#pragma endregion

#pragma region ejercicio6
	short primerNumero, segundoNumero;

	std::cout << "Introduce el primer numero:" << std::endl;
	std::cin >> primerNumero;
	std::cout << std::endl;

	std::cout << "Introduce el segundo numero:" << std::endl;
	std::cin >> segundoNumero;
	std::cout << std::endl;

	std::cout << "El resultado de la suma es: " << primerNumero + segundoNumero << std::endl;

	std::cout << "El resultado de la resta es: " << primerNumero - segundoNumero << std::endl;

	std::cout << "El resultado de la multiplicacion es: " << primerNumero * segundoNumero << std::endl;

	std::cout << "El resultado de la division es: " << primerNumero / segundoNumero << std::endl;

	std::cout << "El resultado del modulo es: " << primerNumero % segundoNumero << std::endl;
#pragma endregion

#pragma region ejercicio7
	short numeroUsuario;
	short valorNegado;

	std::cout << "Introduce un numero: ";
	std::cin >> numeroUsuario;

	valorNegado = -numeroUsuario;

	std::cout << "Este es el valor negado de su numero: " << valorNegado;
#pragma endregion
}