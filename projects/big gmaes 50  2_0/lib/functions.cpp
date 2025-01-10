#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <limits>
#include <vector> // Include the vector header
#include "functions.h"

void playNumberGuessingGame() {
    std::srand(std::time(0));
    int lowerBound, upperBound, number, guess, tries = 0;
    char mode;

    std::cout << "*******************************\n";
    std::cout << "*    Number Guessing Game     *\n";
    std::cout << "*******************************\n";
    std::cout << "Choose mode:\n";
    std::cout << "1. Random Range Mode\n";
    std::cout << "2. Selected Range Mode\n";
    std::cout << "Enter your choice: ";
    std::cin >> mode;

    while (std::cin.fail() || (mode != '1' && mode != '2')) {
        std::cin.clear(); // clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
        std::cout << "Invalid input! Please enter 1 or 2: ";
        std::cin >> mode;
    }

    if (mode == '1') {
        lowerBound = 1;
        upperBound = std::rand() % 10000 + 1;
    } else if (mode == '2') {
        std::cout << "Enter lower bound: ";
        std::cin >> lowerBound;
        while (std::cin.fail() || lowerBound < 1) {
            std::cin.clear(); // clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout << "Invalid input! Please enter a positive number: ";
            std::cin >> lowerBound;
        }
        std::cout << "Enter upper bound: ";
        std::cin >> upperBound;
        while (std::cin.fail() || upperBound <= lowerBound) {
            std::cin.clear(); // clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout << "Invalid input! Please enter a number greater than " << lowerBound << ": ";
            std::cin >> upperBound;
        }
    }

    number = std::rand() % (upperBound - lowerBound + 1) + lowerBound;

    std::cout << "Guess the number (" << lowerBound << " to " << upperBound << "): ";
    while (true) {
        std::cin >> guess;
        while (std::cin.fail()) {
            std::cin.clear(); // clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout << "Invalid input! Please enter a number: ";
            std::cin >> guess;
        }
        tries++;
        if (guess < number) {
            std::cout << "Too low! Try again: ";
        } else if (guess > number) {
            std::cout << "Too high! Try again: ";
        } else {
            std::cout << "Congratulations! You guessed the number in " << tries << " tries." << std::endl;
            double pro = (static_cast<double>(std::log2(upperBound - lowerBound + 1)) / tries) * 100;
            if (pro > 100) pro = 100; // Ensure Pro% is not above 100%
            std::cout << "Pro%: " << pro << "%" << std::endl;
            break;
        }
    }
}

void playQuizGame() {
    struct Question {
        std::string question;
        std::string options[4];
        int correctAnswer;
    };

    Question questions[20] = {
        {"What is the capital of France?", {"1. Berlin", "2. Madrid", "3. Paris", "4. Rome"}, 3},
        {"What is 2 + 2?", {"1. 3", "2. 4", "3. 5", "4. 6"}, 2},
        // ... add more questions here ...
        {"What is the largest planet in our solar system?", {"1. Earth", "2. Mars", "3. Jupiter", "4. Saturn"}, 3},
        {"Who wrote 'To Kill a Mockingbird'?", {"1. Harper Lee", "2. J.K. Rowling", "3. Ernest Hemingway", "4. Mark Twain"}, 1},
        {"What is the chemical symbol for water?", {"1. H2O", "2. CO2", "3. O2", "4. NaCl"}, 1},
        {"What is the speed of light?", {"1. 300,000 km/s", "2. 150,000 km/s", "3. 450,000 km/s", "4. 600,000 km/s"}, 1},
        {"Who painted the Mona Lisa?", {"1. Vincent van Gogh", "2. Pablo Picasso", "3. Leonardo da Vinci", "4. Claude Monet"}, 3},
        {"What is the smallest prime number?", {"1. 0", "2. 1", "3. 2", "4. 3"}, 3},
        {"What is the capital of Japan?", {"1. Beijing", "2. Seoul", "3. Tokyo", "4. Bangkok"}, 3},
        {"What is the square root of 64?", {"1. 6", "2. 7", "3. 8", "4. 9"}, 3},
        {"Who discovered penicillin?", {"1. Marie Curie", "2. Albert Einstein", "3. Alexander Fleming", "4. Isaac Newton"}, 3},
        {"What is the largest ocean on Earth?", {"1. Atlantic Ocean", "2. Indian Ocean", "3. Arctic Ocean", "4. Pacific Ocean"}, 4},
        {"What is the capital of Canada?", {"1. Toronto", "2. Vancouver", "3. Ottawa", "4. Montreal"}, 3},
        {"What is the chemical symbol for gold?", {"1. Au", "2. Ag", "3. Fe", "4. Pb"}, 1},
        {"Who wrote '1984'?", {"1. George Orwell", "2. Aldous Huxley", "3. F. Scott Fitzgerald", "4. J.D. Salinger"}, 1},
        {"What is the largest continent?", {"1. Africa", "2. Asia", "3. Europe", "4. Antarctica"}, 2},
        {"What is the capital of Australia?", {"1. Sydney", "2. Melbourne", "3. Canberra", "4. Brisbane"}, 3},
        {"What is the chemical symbol for sodium?", {"1. Na", "2. K", "3. S", "4. Cl"}, 1},
        {"Who painted the Sistine Chapel ceiling?", {"1. Michelangelo", "2. Raphael", "3. Donatello", "4. Leonardo da Vinci"}, 1},
        {"What is the capital of Italy?", {"1. Venice", "2. Rome", "3. Florence", "4. Milan"}, 2}
    };

    int score = 0;
    char mode;
    std::vector<int> userAnswers(20, 0);

    std::cout << "*******************************\n";
    std::cout << "*          Quiz Game          *\n";
    std::cout << "*******************************\n";
    std::cout << "Choose mode:\n";
    std::cout << "1. Full Quiz (20 questions)\n";
    std::cout << "2. Short Quiz (20 marks)\n";
    std::cout << "Enter your choice: ";
    std::cin >> mode;

    while (std::cin.fail() || (mode != '1' && mode != '2')) {
        std::cin.clear(); // clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
        std::cout << "Invalid input! Please enter 1 or 2: ";
        std::cin >> mode;
    }

    int numQuestions = (mode == '2') ? 5 : 20;

    for (int i = 0; i < numQuestions; ++i) {
        std::cout << "*******************************\n";
        std::cout << questions[i].question << std::endl;
        for (const auto& option : questions[i].options) {
            std::cout << option << std::endl;
        }
        int answer;
        std::cout << "Enter your answer: ";
        std::cin >> answer;

        while (std::cin.fail() || answer < 1 || answer > 4) {
            std::cin.clear(); // clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout << "Invalid input! Please enter a number between 1 and 4: ";
            std::cin >> answer;
        }

        userAnswers[i] = answer;

        if (answer == questions[i].correctAnswer) {
            std::cout << "Correct!" << std::endl;
            score += (mode == '2') ? 4 : 5; // 4 marks for short quiz, 5 marks for full quiz
        } else {
            std::cout << "Wrong!" << std::endl;
        }
    }

    std::cout << "*******************************\n";
    std::cout << "Your score: " << score << " out of " << (numQuestions * ((mode == '2') ? 4 : 5)) << std::endl;

    std::cout << "\nCorrect Answers:\n";
    for (int i = 0; i < numQuestions; ++i) {
        std::cout << "*******************************\n";
        std::cout << questions[i].question << std::endl;
        std::cout << "Your answer: " << questions[i].options[userAnswers[i] - 1] << std::endl;
        std::cout << "Correct answer: " << questions[i].options[questions[i].correctAnswer - 1] << std::endl;
        std::cout << std::endl;
    }
}
