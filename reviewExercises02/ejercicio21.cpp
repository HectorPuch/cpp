#include <iostream>

int main() {

	int year;
	int month;
	int day;
	int yearToSeconds;
	int monthToSeconds;
	int dayToSeconds;
	int seconds;

	std::cout << "Introduzca un día:" << std::endl;
	std::cin >> day;
	std::cout << "" << std::endl;

	std::cout << "Introduzca un mes:" << std::endl;
	std::cin >> month;
	std::cout << "" << std::endl;

	std::cout << "Introduzca un año:" << std::endl;
	std::cin >> year;
	std::cout << "" << std::endl;

	yearToSeconds = year * 365 * 24 * 60 * 60;
	monthToSeconds = (month - 1) * 31 * 24 * 60 * 60;
	dayToSeconds = (day -1) * 24 * 60 * 60;

	seconds = yearToSeconds + monthToSeconds + dayToSeconds;
	std::cout << "Esta es la cantidad de segundos que han pasado desde el 1 de enero del año 0: " << seconds << std::endl;

	return 0;
}