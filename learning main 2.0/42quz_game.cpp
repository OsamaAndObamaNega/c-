#include <iostream>
#include <string>

using namespace std;

const int NUM_QUESTIONS = 4;
const int NUM_CHOICES = 3;

// Correct answers corresponding to each question
char correctAnswers[NUM_QUESTIONS] = {'C', 'B', 'C', 'B'}; // Answers are in the format of 'A', 'B', 'C'

void displayQuestions(string questions[], string choices[][NUM_CHOICES]) {
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        cout << i + 1 << ". " << questions[i] << endl;
        for (int j = 0; j < NUM_CHOICES; j++) {
            cout << "   " << char('A' + j) << ": " << choices[i][j] << endl;
        }
    }
}

double calculateScore(char userAnswers[], char correctAnswers[], int numQuestions) {
    int score = 0; // Initialize score

    for (int i = 0; i < numQuestions; i++) {
        // Check if the answer is correct
        if (userAnswers[i] == correctAnswers[i]) {
            score++; // Increment score for correct answer
        }
    }

    // Calculate percentage
    double percentage = (static_cast<double>(score) / numQuestions) * 100.0;

    return percentage; // Return the final score as a percentage
}


int main() {
    // Questions and choices
    string questions[NUM_QUESTIONS] = {
        "What is the capital of France?",
        "Which planet is known as the Red Planet?",
        "What is the largest ocean on Earth?",
        "Who wrote 'Romeo and Juliet'?"
    };

    string choices[NUM_QUESTIONS][NUM_CHOICES] = {
        {"Berlin", "Madrid", "Paris"},
        {"Earth", "Mars", "Jupiter"},
        {"Atlantic", "Indian", "Pacific"},
        {"Mark Twain", "William Shakespeare", "Charles Dickens"}
    };

    // Array to store user answers
    char answers[NUM_QUESTIONS];

    // Display questions and get answers
    displayQuestions(questions, choices);
    
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        cout << "Your answer for question " << i + 1 << ": ";
        cin >> answers[i];
        answers[i] = toupper(answers[i]); // Convert to uppercase for consistency
    }

    // Display user's answers and correct answers
    cout << "\nYour Answers:\n";
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        cout << "Question " << i + 1 << ": Your answer: " << answers[i]
             << ", Correct answer: " << correctAnswers[i] << endl;
    }

    // Calculate the score
    int score = calculateScore(answers, correctAnswers, NUM_QUESTIONS);

    // Output the score
    std::cout << "Your score is: " << score <<"%"<< endl;

    return 0;
}