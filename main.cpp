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

#pragma region ejercicio8
	int numeroUsuario;

	std::cout << "Introduce un numero de 6 cifras: ";
	std::cin >> numeroUsuario;

	int centenasMillar = numeroUsuario / 100000;
	int decenasMillar = (numeroUsuario / 10000) % 10;
	int unidadesMillar = (numeroUsuario / 1000) % 10;
	int centenas = (numeroUsuario / 100) % 10;
	int decenas = (numeroUsuario / 10) % 10;
	int unidades = numeroUsuario % 10;
	
	std::cout << "Este numero equivale a las centenas de millar: " << centenasMillar << std::endl;
	std::cout << "Este numero equivale a las decenas de millar: " << decenasMillar << std::endl;
	std::cout << "Este numero equivale a las unidades de millar: " << unidadesMillar << std::endl;
	std::cout << "Este numero equivale a las centenas: " << centenas << std::endl;
	std::cout << "Este numero equivale a las decenas: " << decenas << std::endl;
	std::cout << "Este numero equivale a las unidades: " << unidades << std::endl;
#pragma endregion

#pragma region ejercicio9
float ladoCuadrado;
std::cout << "Introduce el lado de un cuadrado: ";
std::cin >> ladoCuadrado;

float areaCuadrado = ladoCuadrado * ladoCuadrado;

std::cout << "Este es el area del cuadrado: " << areaCuadrado;
#pragma endregion

#pragma region ejercicio10
float radioCirculo;

std::cout << "Introduce el radio de un circulo: ";
std::cin >> radioCirculo;

float numeroPI = 3.141592653589793;
float areaCirculo = numeroPI * pow(radioCirculo,2);

std::cout << "Esta es la area de un circulo: " << areaCirculo << std::endl;

float perimetroCirculo = 2 * numeroPI * radioCirculo;

std::cout << "Este es el perimetro de un circulo: " << perimetroCirculo;
#pragma endregion
}