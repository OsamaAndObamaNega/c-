#include <iostream>
#include <conio.h> // For _getch() to capture keyboard input
#include <thread>  // For sleep
#include <chrono>  // For duration
using namespace std;

const int width = 30;  // Width of the grid
const int height = 30; // Height of the grid
char grid[height][width]; // 2D array to represent the game grid

int playerX = 1, playerY = 1; // Player's starting position
int enemyX = 28, enemyY = 15;  // Enemy's position
bool canShoot = true; // Flag to control shooting

// Function to initialize the game grid
void initializeGrid() {
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            // Create walls around the edges of the grid
            if (y == 0 || y == height - 1 || x == 0 || x == width - 1) {
                grid[y][x] = '#'; // Wall
            } else {
                grid[y][x] = ' '; // Empty space
            }
        }
    }
    grid[playerY][playerX] = 'p'; // Place player on the grid
    grid[enemyY][enemyX] = 'E';   // Place enemy on the grid
}

// Function to draw the current state of the grid
void drawGrid() {
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            cout << grid[y][x]; // Print each character in the grid
        }
        cout << endl; // New line after each row
    }
}

// Function to move the player on the grid
void movePlayer(int dx, int dy) {
    int newX = playerX + dx; // Calculate new X position
    int newY = playerY + dy; // Calculate new Y position

    // Check for walls to prevent moving into them
    if (grid[newY][newX] != '#') {
        grid[playerY][playerX] = ' '; // Clear old position
        playerX = newX; // Update player X position
        playerY = newY; // Update player Y position
        grid[playerY][playerX] = 'p'; // Place player in the new position
    }
}

// Function to handle attacking the enemy with animation
void attack() {
    if (!canShoot) return; // Prevent shooting if already shot
    canShoot = false; // Set flag to prevent multiple shots

    thread attackThread([]() {
        int attackX = playerX + 2; // Start attack position
        if (attackX < width && grid[playerY][attackX] == ' ') { // Check if space is empty
            // Animate the attack
            for (int i = attackX; i < width && grid[playerY][i] != '#'; i++) {
                grid[playerY][i] = '-'; // Show the attack
                cout << "\033[" << playerY + 1 << ";" << i + 1 << "H" << '-'; // Move cursor and print bullet
                this_thread::sleep_for(chrono::milliseconds(50)); // Faster bullet speed
                
                // Check if the attack hits the enemy
                if (grid[playerY][i] == 'E') {
                    grid[enemyY][enemyX] = ' '; // Eliminate the enemy
                    cout << "\033[" << enemyY + 1 << ";" << enemyX + 1 << "H" << ' '; // Clear enemy
                    break; // Stop the animation
                }

                grid[playerY][i] = ' '; // Clear the attack position
                cout << "\033[" << playerY + 1 << ";" << i + 1 << "H" << ' '; // Move cursor and clear bullet
            }
        }
        canShoot = true; // Reset flag to allow shooting again
    });
    attackThread.detach(); // Detach the thread to allow concurrent execution
}

void playGridGame() {
    initializeGrid(); // Set up the game grid
    system("cls"); // Clear the console (Windows)
    drawGrid(); // Initial draw of the grid
    while (true) { // Main game loop
        char input = _getch(); // Get user input without waiting for Enter

        // Handle user input for movement and actions
        switch (input) {
            case 'w': movePlayer(0, -1); break; // Move up
            case 's': movePlayer(0, 1); break;  // Move down
            case 'a': movePlayer(-1, 0); break; // Move left
            case 'd': movePlayer(1, 0); break;  // Move right
            case ' ': attack(); break;           // Attack with animation
            case 'q': return;                  // Quit the game
        }
        cout << "\033[" << playerY + 1 << ";" << playerX + 1 << "H" << 'p'; // Move cursor and print player
    }
}
