#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <conio.h> // For _getch() to capture keyboard input
#include <thread>  // For sleep
#include <chrono>  // For duration
using namespace std;

// Function declaration for grid game
void playGridGame();

// Tic-tac-toe game variables and functions
vector<char> board(9, ' ');
const char PLAYER = 'X';
const char COMPUTER = 'C'; // Changed from 'O' to 'C'
int playerScore = 0;
int computerScore = 0;

void displayBoard() {
    cout << "\nTic Tac Toe\n\n";
    for (int i = 0; i < 9; i += 3) {
        cout << " " << (board[i] == ' ' ? char('1' + i) : board[i]) << " | "
             << (board[i + 1] == ' ' ? char('2' + i) : board[i + 1]) << " | "
             << (board[i + 2] == ' ' ? char('3' + i) : board[i + 2]) << endl;
        if (i < 6) cout << "---+---+---" << endl;
    }
    cout << "\nPlayer Score: " << playerScore << " | Computer Score: " << computerScore << endl;
    cout << endl;
}

bool checkWin(char player) {
    const int wins[8][3] = {
        {0,1,2}, {3,4,5}, {6,7,8}, // rows
        {0,3,6}, {1,4,7}, {2,5,8}, // columns
        {0,4,8}, {2,4,6}           // diagonals
    };
    
    for (auto& win : wins) {
        if (board[win[0]] == player && 
            board[win[1]] == player && 
            board[win[2]] == player)
            return true;
    }
    return false;
}

bool isBoardFull() {
    return count(board.begin(), board.end(), ' ') == 0;
}

int minimax(bool isMaximizing, int depth) {
    if (checkWin(COMPUTER)) return 10 - depth;
    if (checkWin(PLAYER)) return depth - 10;
    if (isBoardFull()) return 0;

    int bestScore = isMaximizing ? -1000 : 1000;
    
    for (int i = 0; i < 9; i++) {
        if (board[i] == ' ') {
            board[i] = isMaximizing ? COMPUTER : PLAYER;
            int score = minimax(!isMaximizing, depth + 1);
            board[i] = ' ';
            
            if (isMaximizing)
                bestScore = max(score, bestScore);
            else
                bestScore = min(score, bestScore);
        }
    }
    return bestScore;
}

void computerMove() {
    int bestScore = -1000;
    int bestMove = -1;

    for (int i = 0; i < 9; i++) {
        if (board[i] == ' ') {
            board[i] = COMPUTER;
            int score = minimax(false, 0);
            board[i] = ' ';

            if (score > bestScore) {
                bestScore = score;
                bestMove = i;
            }
        }
    }
    
    if (bestMove != -1) {
        board[bestMove] = COMPUTER;
    }
}

void resetBoard() {
    fill(board.begin(), board.end(), ' ');
}

void playTicTacToe() {
    string input;
    char firstPlayer;
    
    cout << "Do you want to play the first move? (y/n): ";
    cin >> firstPlayer;
    cin.ignore();

    while (true) {
        resetBoard();
        bool playerTurn = (firstPlayer == 'y' || firstPlayer == 'Y');
        
        while (true) {
            displayBoard();
            if (playerTurn) {
                cout << "Enter position (1-9) or 'q' to quit: ";
                getline(cin, input);
                
                if (input == "q" || input == "Q") return;
                
                if (input.length() == 1 && input[0] >= '1' && input[0] <= '9') {
                    int pos = input[0] - '1';
                    if (board[pos] == ' ') {
                        board[pos] = PLAYER;
                        
                        if (checkWin(PLAYER)) {
                            displayBoard();
                            cout << "You won!\n";
                            playerScore++;
                            break;
                        }
                        
                        if (isBoardFull()) {
                            displayBoard();
                            cout << "It's a draw!\n";
                            break;
                        }
                        
                        playerTurn = false;
                    } else {
                        cout << "Position already taken! Try again.\n";
                    }
                } else {
                    cout << "Invalid input! Please enter a number between 1-9.\n";
                }
            } else {
                computerMove();
                
                if (checkWin(COMPUTER)) {
                    displayBoard();
                    cout << "Computer wins!\n";
                    computerScore++;
                    break;
                }
                
                if (isBoardFull()) {
                    displayBoard();
                    cout << "It's a draw!\n";
                    break;
                }
                
                playerTurn = true;
            }
        }
        
        cout << "Do you want to play again? (y/n): ";
        getline(cin, input);
        if (input != "y" && input != "Y") break;
    }
}
//// End of Tic-tac-toe game functions ////

// Quiz game functions
void playQuiz() {
    struct Question {
        string question;
        string options[4];
        int correctAnswer;
    };
    
    vector<Question> questions = {
        {"What is the capital of France?", {"1) Berlin", "2) Madrid", "3) Paris", "4) Rome"}, 3},
        {"What is 2 + 2?", {"1) 3", "2) 4", "3) 5", "4) 6"}, 2},
        {"What is the largest planet in our solar system?", {"1) Earth", "2) Mars", "3) Jupiter", "4) Saturn"}, 3},
        {"Who wrote 'To Kill a Mockingbird'?", {"1) Harper Lee", "2) J.K. Rowling", "3) Ernest Hemingway", "4) Mark Twain"}, 1},
        {"What is the chemical symbol for water?", {"1) H2O", "2) CO2", "3) O2", "4) NaCl"}, 1}
    };
    
    int answer;
    int score = 0;
    
    cout << "Quiz Game\n";
    for (const auto& q : questions) {
        cout << q.question << "\n";
        for (const auto& option : q.options) {
            cout << option << "\n";
        }
        cout << "Your answer (1-4): ";
        cin >> answer;
        if (answer == q.correctAnswer) {
            score++;
        }
    }
    
    cout << "Your score: " << score << "/" << questions.size() << "\n";
}
//// End of Quiz game functions ////

// Number guessing game functions
void playNumberGuessing() {
    srand(time(0));
    int lowerBound, upperBound;
    cout << "Enter the lower bound of the range: ";
    cin >> lowerBound;
    cout << "Enter the upper bound of the range: ";
    cin >> upperBound;
    
    int number = rand() % (upperBound - lowerBound + 1) + lowerBound;
    int guess;
    int attempts = 0;
    
    cout << "Number Guessing Game\n";
    cout << "I have chosen a number between " << lowerBound << " and " << upperBound << ". Try to guess it!\n";
    
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        
        if (guess < number) {
            cout << "Too low!\n";
        } else if (guess > number) {
            cout << "Too high!\n";
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
            break;
        }
    }
}
//// End of Number guessing game functions ////

// Simple math game functions
void playMathGame() {
    srand(time(0));
    int num1 = rand() % 100;
    int num2 = rand() % 100;
    int answer;
    
    cout << "Math Game\n";
    cout << "What is " << num1 << " + " << num2 << "?\n";
    cout << "Your answer: ";
    cin >> answer;
    
    if (answer == num1 + num2) {
        cout << "Correct!\n";
    } else {
        cout << "Incorrect. The correct answer is " << num1 + num2 << ".\n";
    }
}
//// End of Math game functions ////

int main() {
    string choice;
    
    while (true) {
        cout << "Choose a game to play:\n";
        cout << "1. Tic-tac-toe\n";
        cout << "2. Quiz\n";
        cout << "3. Number Guessing\n";
        cout << "4. Grid Game\n";
        cout << "5. Math Game\n";
        cout << "Enter your choice (1-5) or 'q' to quit: ";
        cin >> choice;
        
        if (choice == "q" || choice == "Q") break;
        
        if (choice == "1") {
            playTicTacToe();
        } else if (choice == "2") {
            playQuiz();
        } else if (choice == "3") {
            playNumberGuessing();
        } else if (choice == "4") {
            playGridGame();
        } else if (choice == "5") {
            playMathGame();
        } else {
            cout << "Invalid choice! Please enter a number between 1 and 5.\n";
        }
    }
    
    return 0;
}
