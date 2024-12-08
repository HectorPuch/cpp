#include <iostream>

void main() {

	char respuestaCorrectaPregunta1 = 'b';
	char respuestaCorrectaPregunta2 = 'b';
	char respuestaCorrectaPregunta3 = 'c';
	char respuestaCorrectaPregunta4 = 'b';
	char respuestaCorrectaPregunta5 = 'b';
	char respuestaCorrectaPregunta6 = 'b';
	char respuestaCorrectaPregunta7 = 'c';
	char respuestaCorrectaPregunta8 = 'b';
	char respuestaCorrectaPregunta9 = 'b';
	char respuestaCorrectaPregunta10 = 'c';

	char respuestaUsuario;
	int puntuacion = 0;
	int racha = 0;
	int mayorRacha = 0;

	bool pregunta1Correcta = false;
	bool pregunta2Correcta = false;
	bool pregunta3Correcta = false;
	bool pregunta4Correcta = false;
	bool pregunta5Correcta = false;
	bool pregunta6Correcta = false;
	bool pregunta7Correcta = false;
	bool pregunta8Correcta = false;
	bool pregunta9Correcta = false;
	bool pregunta10Correcta = false;

	std::cout << "1. Cual es el rio mas largo del mundo?" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "a) Nilo" << std::endl;
	std::cout << "b) Amazonas" << std::endl;
	std::cout << "c) Yangste" << std::endl;
	std::cout << "d) Misisipi" << std::endl; 
	std::cout << "" << std::endl;
	std::cout << "Introduce la respuesta correcta (a, b, c o d): ";
	std::cin >> respuestaUsuario;
	std::cout << "" << std::endl;

	if (respuestaUsuario == respuestaCorrectaPregunta1) {
		std::cout << "Respuesta correcta!";
		puntuacion += (racha == 0) ? 1 : (racha + 1);
		racha++;
		pregunta1Correcta = true;
		std::cout << "" << std::endl;
	}
	else {
		std::cout << "Respuesta incorrecta!" << std::endl;
		std::cout << "" << std::endl;
		std::cout << "La respuesta correcta es: b";
		puntuacion -= 1;
		racha = 0;
		std::cout << "" << std::endl;
	}

	mayorRacha = (racha > mayorRacha) ? racha : mayorRacha;
	
	std::cout << "" << std::endl;

	std::cout << "2. En que año llego el hombre a la Luna?" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "a) 1965" << std::endl;
	std::cout << "b) 1969" << std::endl;
	std::cout << "c) 1971" << std::endl;
	std::cout << "d) 1975" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Introduce la respuesta correcta (a, b, c o d): ";
	std::cin >> respuestaUsuario;
	std::cout << "" << std::endl;

	if (respuestaUsuario == respuestaCorrectaPregunta2) {
		std::cout << "Respuesta correcta!";
		puntuacion += (racha == 0) ? 1 : (racha + 1);
		racha++;
		pregunta2Correcta = true;
		std::cout << "" << std::endl;
	}
	else {
		std::cout << "Respuesta incorrecta!" << std::endl;
		std::cout << "" << std::endl;
		std::cout << "La respuesta correcta es: b";
		puntuacion -= 1;
		racha = 0;
		std::cout << "" << std::endl;
	}

	mayorRacha = (racha > mayorRacha) ? racha : mayorRacha;

	std::cout << "" << std::endl;

	std::cout << "3. Quien pinto la obra La ultima cena?" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "a) Miguel Angel" << std::endl;
	std::cout << "b) Vincent van Gogh" << std::endl;
	std::cout << "c) Leonardo da Vinci" << std::endl;
	std::cout << "d) Pablo Picasso" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Introduce la respuesta correcta (a, b, c o d): ";
	std::cin >> respuestaUsuario;
	std::cout << "" << std::endl;

	if (respuestaUsuario == respuestaCorrectaPregunta3) {
		std::cout << "Respuesta correcta!";
		puntuacion += (racha == 0) ? 1 : (racha + 1);
		racha++;
		pregunta3Correcta = true;
		std::cout << "" << std::endl;
	}
	else {
		std::cout << "Respuesta incorrecta!" << std::endl;
		std::cout << "" << std::endl;
		std::cout << "La respuesta correcta es: c";
		puntuacion -= 1;
		racha = 0;
		std::cout << "" << std::endl;
	}

	mayorRacha = (racha > mayorRacha) ? racha : mayorRacha;

	std::cout << "" << std::endl;

	std::cout << "4. Cual es el pais mas grande del mundo en superficie?" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "a) Estados Unidos" << std::endl;
	std::cout << "b) Rusia" << std::endl;
	std::cout << "c) Canada" << std::endl;
	std::cout << "d) China" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Introduce la respuesta correcta (a, b, c o d): ";
	std::cin >> respuestaUsuario;
	std::cout << "" << std::endl;

	if (respuestaUsuario == respuestaCorrectaPregunta4) {
		std::cout << "Respuesta correcta!";
		puntuacion += (racha == 0) ? 1 : (racha + 1);
		racha++;
		pregunta4Correcta = true;
		std::cout << "" << std::endl;
	}
	else {
		std::cout << "Respuesta incorrecta!" << std::endl;
		std::cout << "" << std::endl;
		std::cout << "La respuesta correcta es: b";
		puntuacion -= 1;
		racha = 0;
		std::cout << "" << std::endl;
	}

	mayorRacha = (racha > mayorRacha) ? racha : mayorRacha;

	std::cout << "" << std::endl;

	std::cout << "5. Que elemento quimico tiene el simbolo O?" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "a) Oro" << std::endl;
	std::cout << "b) Oxigeno" << std::endl;
	std::cout << "c) Osmio" << std::endl;
	std::cout << "d) Ozono" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Introduce la respuesta correcta (a, b, c o d): ";
	std::cin >> respuestaUsuario;
	std::cout << "" << std::endl;

	if (respuestaUsuario == respuestaCorrectaPregunta5) {
		std::cout << "Respuesta correcta!";
		puntuacion += (racha == 0) ? 1 : (racha + 1);
		racha++;
		pregunta5Correcta = true;
		std::cout << "" << std::endl;
	}
	else {
		std::cout << "Respuesta incorrecta!" << std::endl;
		std::cout << "" << std::endl;
		std::cout << "La respuesta correcta es: b";
		puntuacion -= 1;
		racha = 0;
		std::cout << "" << std::endl;
	}

	mayorRacha = (racha > mayorRacha) ? racha : mayorRacha;

	std::cout << "" << std::endl;

	std::cout << "6. Quien escribio Cien años de soledad?" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "a) Mario Vargas Llosa" << std::endl;
	std::cout << "b) Gabriel Garcia Marquez" << std::endl;
	std::cout << "c) Jose Luis Borges" << std::endl;
	std::cout << "d) Isabel Allende" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Introduce la respuesta correcta (a, b, c o d): ";
	std::cin >> respuestaUsuario;
	std::cout << "" << std::endl;

	if (respuestaUsuario == respuestaCorrectaPregunta6) {
		std::cout << "Respuesta correcta!";
		puntuacion += (racha == 0) ? 1 : (racha + 1);
		racha++;
		pregunta6Correcta = true;
		std::cout << "" << std::endl;
	}
	else {
		std::cout << "Respuesta incorrecta!" << std::endl;
		std::cout << "" << std::endl;
		std::cout << "La respuesta correcta es: b";
		puntuacion -= 1;
		racha = 0;
		std::cout << "" << std::endl;
	}

	mayorRacha = (racha > mayorRacha) ? racha : mayorRacha;

	std::cout << "" << std::endl;

	std::cout << "7. Cual es el oceano mas grande del mundo?" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "a) Atlantico" << std::endl;
	std::cout << "b) Indico" << std::endl;
	std::cout << "c) Pacifico" << std::endl;
	std::cout << "d) Artico" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Introduce la respuesta correcta (a, b, c o d): ";
	std::cin >> respuestaUsuario;
	std::cout << "" << std::endl;

	if (respuestaUsuario == respuestaCorrectaPregunta7) {
		std::cout << "Respuesta correcta!";
		puntuacion += (racha == 0) ? 1 : (racha + 1);
		racha++;
		pregunta7Correcta = true;
		std::cout << "" << std::endl;
	}
	else {
		std::cout << "Respuesta incorrecta!" << std::endl;
		std::cout << "" << std::endl;
		std::cout << "La respuesta correcta es: c";
		puntuacion -= 1;
		racha = 0;
		std::cout << "" << std::endl;
	}

	mayorRacha = (racha > mayorRacha) ? racha : mayorRacha;

	std::cout << "" << std::endl;

	std::cout << "8. En que continente se encuentra el desierto del Sahara?" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "a) Asia" << std::endl;
	std::cout << "b) Africa" << std::endl;
	std::cout << "c) Oceania" << std::endl;
	std::cout << "d) America" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Introduce la respuesta correcta (a, b, c o d): ";
	std::cin >> respuestaUsuario;
	std::cout << "" << std::endl;

	if (respuestaUsuario == respuestaCorrectaPregunta8) {
		std::cout << "Respuesta correcta!";
		puntuacion += (racha == 0) ? 1 : (racha + 1);
		racha++;
		pregunta8Correcta = true;
		std::cout << "" << std::endl;
	}
	else {
		std::cout << "Respuesta incorrecta!" << std::endl;
		std::cout << "" << std::endl;
		std::cout << "La respuesta correcta es: b";
		puntuacion -= 1;
		racha = 0;
		std::cout << "" << std::endl;
	}

	mayorRacha = (racha > mayorRacha) ? racha : mayorRacha;

	std::cout << "" << std::endl;

	std::cout << "9. Que pais tiene como capital a Tokio?" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "a) Corea del Sur" << std::endl;
	std::cout << "b) Japon" << std::endl;
	std::cout << "c) China" << std::endl;
	std::cout << "d) Tailandia" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Introduce la respuesta correcta (a, b, c o d): ";
	std::cin >> respuestaUsuario;
	std::cout << "" << std::endl;

	if (respuestaUsuario == respuestaCorrectaPregunta9) {
		std::cout << "Respuesta correcta!";
		puntuacion += (racha == 0) ? 1 : (racha + 1);
		racha++;
		pregunta9Correcta = true;
		std::cout << "" << std::endl;
	}
	else {
		std::cout << "Respuesta incorrecta!" << std::endl;
		std::cout << "" << std::endl;
		std::cout << "La respuesta correcta es: b";
		puntuacion -= 1;
		racha = 0;
		std::cout << "" << std::endl;
	}

	mayorRacha = (racha > mayorRacha) ? racha : mayorRacha;

	std::cout << "" << std::endl;

	std::cout << "10. Cual es el animal terrestre mas rapido del mundo?" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "a) Tigre" << std::endl;
	std::cout << "b) Leon" << std::endl;
	std::cout << "c) Guepardo" << std::endl;
	std::cout << "d) Canguro" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "Introduce la respuesta correcta (a, b, c o d): ";
	std::cin >> respuestaUsuario;
	std::cout << "" << std::endl;

	if (respuestaUsuario == respuestaCorrectaPregunta10) {
		std::cout << "Respuesta correcta!";
		puntuacion += (racha == 0) ? 1 : (racha + 1);
		racha++;
		pregunta10Correcta = true;
		std::cout << "" << std::endl;
	}
	else {
		std::cout << "Respuesta incorrecta!" << std::endl;
		std::cout << "" << std::endl;
		std::cout << "La respuesta correcta es: c";
		puntuacion -= 1;
		racha = 0;
		std::cout << "" << std::endl;
	}

	mayorRacha = (racha > mayorRacha) ? racha : mayorRacha;

	std::cout << "" << std::endl;

	if (puntuacion <= 20) {
		std::cout << "Extra. Quien fue el primer presidente de los Estados Unidos?" << std::endl;
		std::cout << "" << std::endl;
		std::cout << "a) Abraham Lincoln" << std::endl;
		std::cout << "b) George Washington" << std::endl;
		std::cout << "c) Thomas Jefferson" << std::endl;
		std::cout << "d) John Adams" << std::endl;
		std::cout << "" << std::endl;
		std::cout << "Introduce la respuesta correcta (a, b, c o d): ";
		std::cin >> respuestaUsuario;
		std::cout << "" << std::endl;

		if (respuestaUsuario == 'b') {
			std::cout << "Respuesta correcta!";
			puntuacion += (racha == 0) ? 1 : (racha + 1);
			std::cout << "" << std::endl;
		}
		else {
			std::cout << "Respuesta incorrecta!" << std::endl;
			std::cout << "" << std::endl;
			std::cout << "La respuesta correcta es: b";
			puntuacion -= 1;
			std::cout << "" << std::endl;
		}
	}

	std::cout << "" << std::endl;

	std::cout << "=================================" << std::endl;

	std::cout << "" << std::endl;

	std::cout << "Resumen de respuestas correctas:" << std::endl;

	std::cout << "" << std::endl;

	if (pregunta1Correcta) std::cout << "Pregunta 1" << std::endl;
	if (pregunta2Correcta) std::cout << "Pregunta 2" << std::endl;
	if (pregunta3Correcta) std::cout << "Pregunta 3" << std::endl;
	if (pregunta4Correcta) std::cout << "Pregunta 4" << std::endl;
	if (pregunta5Correcta) std::cout << "Pregunta 5" << std::endl;
	if (pregunta6Correcta) std::cout << "Pregunta 6" << std::endl;
	if (pregunta7Correcta) std::cout << "Pregunta 7" << std::endl;
	if (pregunta8Correcta) std::cout << "Pregunta 8" << std::endl;
	if (pregunta9Correcta) std::cout << "Pregunta 9" << std::endl;
	if (pregunta10Correcta) std::cout << "Pregunta 10" << std::endl;

	std::cout << "" << std::endl;

	std::cout << "Resumen de respuestas incorrectas:" << std::endl;

	std::cout << "" << std::endl;

	if (!pregunta1Correcta) std::cout << "Pregunta 1" << std::endl;
	if (!pregunta2Correcta) std::cout << "Pregunta 2" << std::endl;
	if (!pregunta3Correcta) std::cout << "Pregunta 3" << std::endl;
	if (!pregunta4Correcta) std::cout << "Pregunta 4" << std::endl;
	if (!pregunta5Correcta) std::cout << "Pregunta 5" << std::endl;
	if (!pregunta6Correcta) std::cout << "Pregunta 6" << std::endl;
	if (!pregunta7Correcta) std::cout << "Pregunta 7" << std::endl;
	if (!pregunta8Correcta) std::cout << "Pregunta 8" << std::endl;
	if (!pregunta9Correcta) std::cout << "Pregunta 9" << std::endl;
	if (!pregunta10Correcta) std::cout << "Pregunta 10" << std::endl;

	std::cout << "" << std::endl;

	std::cout << "Mayor racha de respuestas correctas: " << mayorRacha << std::endl;

	std::cout << "" << std::endl;

	std::cout << "Puntuacion final: " << puntuacion << std::endl;

	std::cout << "" << std::endl;

	if (puntuacion > 20) {
		std::cout << "Felicidades! Has aprobado el examen." << std::endl;
	}
	else {
		std::cout << "Lo siento, no has aprobado el examen." << std::endl;
	}

}