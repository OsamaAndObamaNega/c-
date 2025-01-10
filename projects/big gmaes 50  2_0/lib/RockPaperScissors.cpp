#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include "functions.h"

void playRockPaperScissors() {
    std::srand(std::time(0));
    std::string choices[3] = {"Rock", "Paper", "Scissors"};
    char playAgain;
    int playerScore = 0, computerScore = 0;

    do {
        int playerChoice, computerChoice;
        std::cout << "*******************************\n";
        std::cout << "*      Rock Paper Scissors    *\n";
        std::cout << "*******************************\n";
        std::cout << "Choose your move:\n";
        std::cout << "1. Rock\n";
        std::cout << "2. Paper\n";
        std::cout << "3. Scissors\n";
        std::cout << "Enter your choice: ";
        std::cin >> playerChoice;

        while (std::cin.fail() || playerChoice < 1 || playerChoice > 3) {
            std::cin.clear(); // clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout << "Invalid input! Please enter a number between 1 and 3: ";
            std::cin >> playerChoice;
        }

        computerChoice = std::rand() % 3 + 1;

        std::cout << "You chose: " << choices[playerChoice - 1] << "\n";
        std::cout << "Computer chose: " << choices[computerChoice - 1] << "\n";

        if (playerChoice == computerChoice) {
            std::cout << "It's a draw!\n";
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            std::cout << "You win!\n";
            playerScore++;
        } else {
            std::cout << "Computer wins!\n";
            computerScore++;
        }

        std::cout << "Score: You " << playerScore << " - " << computerScore << " Computer\n";
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Final Score: You " << playerScore << " - " << computerScore << " Computer\n";
    std::cout << "Thanks for playing!\n";
}
