#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <limits>
#include "functions.h"

void playSimonSays() {
    std::srand(std::time(0));
    std::vector<std::string> colors = {"Red", "Green", "Blue", "Yellow"};
    std::vector<std::string> sequence;
    std::string userInput;
    char playAgain;
    bool correct;

    do {
        sequence.clear();
        correct = true;
        int round = 1;

        std::cout << "*******************************\n";
        std::cout << "*         Simon Says          *\n";
        std::cout << "*******************************\n";

        while (correct) {
            sequence.push_back(colors[std::rand() % 4]);
            std::cout << "Round " << round << ": Simon says...\n";
            for (const auto& color : sequence) {
                std::cout << color << " ";
            }
            std::cout << "\nRepeat the sequence (or enter 'q' to quit): ";

            for (const auto& color : sequence) {
                std::cin >> userInput;
                if (userInput == "q" || userInput == "Q") {
                    std::cout << "You quit the game.\n";
                    return;
                }
                if (userInput != color) {
                    correct = false;
                    break;
                }
            }

            if (correct) {
                std::cout << "Correct! Get ready for the next round.\n";
                round++;
            } else {
                std::cout << "Wrong! Game over.\n";
                std::cout << "You reached round " << round << ".\n";
            }
        }

        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thanks for playing!\n";
}
