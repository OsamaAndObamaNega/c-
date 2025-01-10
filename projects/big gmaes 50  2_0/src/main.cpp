// src/main.cpp
#include <iostream>
#include <limits> // Include limits for error handling
#include "functions.h"

int main() {
    char choice;

    while (true) {
        std::cout << "*******************************\n";
        std::cout << "*       Choose a game         *\n";
        std::cout << "*******************************\n";
        std::cout << "1. Number Guessing Game\n";
        std::cout << "2. Quiz Game\n";
        std::cout << "3. Tic Tac Toe\n";
        std::cout << "4. Rock Paper Scissors\n";
        std::cout << "5. Simon Says\n";
        std::cout << "6. Terminal Game\n";
        std::cout << "Enter your choice (or 'q' to quit): ";
        std::cin >> choice;

        if (choice == 'q' || choice == 'Q') {
            std::cout << "Quitting the game. Goodbye!\n";
            break;
        }

        while (std::cin.fail() || choice < '1' || choice > '6') {
            std::cin.clear(); // clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout << "Invalid input! Please enter a number between 1 and 6 (or 'q' to quit): ";
            std::cin >> choice;
            if (choice == 'q' || choice == 'Q') {
                std::cout << "Quitting the game. Goodbye!\n";
                return 0;
            }
        }

        std::cout << "*******************************\n";

        switch (choice) {
            case '1':
                playNumberGuessingGame();
                break;
            case '2':
                playQuizGame();
                break;
            case '3':
                playTicTacToe();
                break;
            case '4':
                playRockPaperScissors();
                break;
            case '5':
                playSimonSays();
                break;
            case '6':
                playTerminalGame();
                break;
            default:
                std::cout << "Invalid choice!" << std::endl;
                break;
        }
    }

    return 0;
}
