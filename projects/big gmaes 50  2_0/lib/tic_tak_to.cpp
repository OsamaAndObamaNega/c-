#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include "functions.h"

using namespace std;

vector<char> board(9, ' ');
const char PLAYER = 'X';
const char COMPUTER = 'C'; // Changed from 'O' to 'C'
int playerScore = 0;
int computerScore = 0;

void displayBoard() {
    cout << "\n*******************************\n";
    cout << "*         Tic Tac Toe         *\n";
    cout << "*******************************\n";
    for (int i = 0; i < 9; i += 3) {
        cout << " " << (board[i] == ' ' ? char('1' + i) : board[i]) << " | "
             << (board[i + 1] == ' ' ? char('2' + i) : board[i + 1]) << " | "
             << (board[i + 2] == ' ' ? char('3' + i) : board[i + 2]) << endl;
        if (i < 6) cout << "---+---+---" << endl;
    }
    cout << "\nPlayer Score: " << playerScore << " | Computer Score: " << computerScore << endl;
    cout << "*******************************\n";
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
