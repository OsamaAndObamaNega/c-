#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

void getUserChoice(char &userChoice) {  // Corrected function name (no space)
    std::cout << "Enter your choice (r for rock, p for paper, s for scissors): ";
    std::cin >> userChoice;
    userChoice = tolower(userChoice); // Ensure the choice is lowercase
}

char getComputerChoice() {
    int randomChoice = rand() % 3; // Generate a random number between 0 and 2
    switch (randomChoice) {
        case 0: return 'r';
        case 1: return 'p';
        case 2: return 's';
    }
    return 'r'; // Default case, should never reach here
}

void determineWinner(char userChoice, char computerChoice) {
    if (userChoice == computerChoice) {
        std::cout << "It's a tie!\n";
    } else if ((userChoice == 'r' && computerChoice == 's') ||
               (userChoice == 'p' && computerChoice == 'r') ||
               (userChoice == 's' && computerChoice == 'p')) {
        std::cout << "You win!\n";
    } else {
        std::cout << "You lose!\n";
    }
}

bool playAgain() {
    char choice;
    std::cout << "Do you want to play again? (y/n): ";
    std::cin >> choice;
    return tolower(choice) == 'y';
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    char userChoice;
    char computerChoice;
    bool keepPlaying;

    do {
        getUserChoice(userChoice); // Corrected function call (no space)
        computerChoice = getComputerChoice();

        std::cout << "Computer chose: " << computerChoice << "\n";

        determineWinner(userChoice, computerChoice);

        keepPlaying = playAgain();
    } while (keepPlaying);

    std::cout << "Thanks for playing!\n";
    return 0;
}