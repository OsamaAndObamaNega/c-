#include <iostream>
#include <cctype> // for toupper

int main() {
    std::string questions[] = {
        "What is the capital of France?",
        "What is 5 + 3?",
        "Who wrote 'Hamlet'?",
        "What is the largest planet in our solar system?"
    };

    std::string options[][4] = {
        {"A. Paris", "B. London", "C. Berlin", "D. Madrid"},          // Options for Q1
        {"A. 6", "B. 7", "C. 8", "D. 9"},                            // Options for Q2
        {"A. Shakespeare", "B. Dickens", "C. Hemingway", "D. Tolkien"}, // Options for Q3
        {"A. Earth", "B. Mars", "C. Jupiter", "D. Venus"}            // Options for Q4
    };

    char answers[] = {'A', 'C', 'A', 'C'};
    int size = sizeof(questions) / sizeof(questions[0]);
    char guesses[4];
    int score = 0; // Initialize score to 0

    for (int i = 0; i < size; i++) {
        std::cout << "**************\n";
        std::cout << questions[i] << "\n";
        std::cout << "**************\n";

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++) {
            std::cout << options[i][j] << '\n';
        }
        std::cout << "Enter your option: ";
        std::cin >> guesses[i];
        guesses[i] = toupper(guesses[i]);

        if (guesses[i] == answers[i]) {
            std::cout << "Correct!\n";
            score += 1;
        } else {
            std::cout << "Wrong!\n";
            std::cout << "The correct answer is " << answers[i] << '\n';
        }
    }

    std::cout << "Your score is: " << score << '\n';
    std::cout << "Your answers are: ";
    for (char gus : guesses) {
        std::cout << gus << " "; // Print as characters
    }
    std::cout << "\nThe correct answers are: ";
    for (char ans : answers) {
        std::cout << ans << " "; // Print as characters
    }
    std::cout << '\n';

    return 0;
}