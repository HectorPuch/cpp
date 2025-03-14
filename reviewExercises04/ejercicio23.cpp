#include <iostream>
#include <time.h>

int main() {

    srand(time(NULL));

    int playerInput, rounds = 1, playerWins = 0, machineWins = 0;
    int machineInput = 1 + rand() % 3;

    while (rounds <= 5) 
    {
        std::cout << "Turno del Jugador.\n";
        std::cout << "Elija una de las siguientes opciones:\n";
        std::cout << "1 - Piedra.\n";
        std::cout << "2 - Papel.\n";
        std::cout << "3 - Tijera.\n";
        std::cin >> playerInput;
        std::cout << std::endl;

        // Validación de entrada para el Jugador
        while (playerInput < 1 || playerInput > 3) 
        {
            std::cout << "Entrada invalida. Por favor, elija 1, 2 o 3.\n";
            std::cin >> playerInput;
            std::cout << std::endl;
        }

        std::cout << "Turno de la Maquina.\n";
        std::cout << "Elija una de las siguientes opciones:\n";
        std::cout << "1 - Piedra.\n";
        std::cout << "2 - Papel.\n";
        std::cout << "3 - Tijera.\n";
        std::cout << machineInput;
        std::cout << std::endl;

        // Lógica para determinar el ganador
        if (playerInput == machineInput) 
        {
            std::cout << std::endl;
            std::cout << "Empate!\n";
            std::cout << std::endl;
        }
        else if ((playerInput == 1 && machineInput == 3) || (playerInput == 2 && machineInput == 1) || (playerInput == 3 && machineInput == 2)) 
        {
            std::cout << std::endl;
            std::cout << "Victoria del Jugador!\n";
            std::cout << std::endl;
            playerWins++;
        }
        else 
        {
            std::cout << std::endl;
            std::cout << "Victoria de la Maquina!\n";
            std::cout << std::endl;
            machineWins++;
        }

        std::cout << "Numero de rondas: " << rounds << std::endl;
        std::cout << std::endl;
        rounds++;
    }

    std::cout << "Victorias del Jugador: " << playerWins << std::endl;
    std::cout << "Victorias de la Maquina: " << machineWins << std::endl;

    return 0;
}
