#include <iostream>
#include <conio.h> // For _getch() to capture keyboard input
#include <cstdlib> // For system() function
#include <thread>  // For sleep
#include <chrono>  // For duration

const int width = 30;  // Width of the grid
const int height = 30; // Height of the grid
char grid[height][width]; // 2D array to represent the game grid

int playerX = 1, playerY = 1; // Player's starting position
int enemyX = 28, enemyY = 15;  // Enemy's position

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
    system("cls"); // Clear the console (Windows)
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            std::cout << grid[y][x]; // Print each character in the grid
        }
        std::cout << std::endl; // New line after each row
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
    int attackX = playerX + 2; // Start attack position
    if (attackX < width && grid[playerY][attackX] == ' ') { // Check if space is empty
        // Animate the attack
        for (int i = attackX; i < width && grid[playerY][i] != '#'; i++) {
            grid[playerY][i] = '-'; // Show the attack
            drawGrid(); // Draw the grid with the attack
            std::this_thread::sleep_for(std::chrono::milliseconds(200)); // Pause for effect
            
            // Check if the attack hits the enemy
            if (grid[playerY][i] == 'E') {
                grid[enemyY][enemyX] = ' '; // Eliminate the enemy
                break; // Stop the animation
            }

            grid[playerY][i] = ' '; // Clear the attack position
        }
    }
}

// Main function to run the game
int main() {
    initializeGrid(); // Set up the game grid
    while (true) { // Main game loop
        drawGrid(); // Draw the current state of the grid
        char input = _getch(); // Get user input without waiting for Enter

        // Handle user input for movement and actions
        switch (input) {
            case 'w': movePlayer(0, -1); break; // Move up
            case 's': movePlayer(0, 1); break;  // Move down
            case 'a': movePlayer(-1, 0); break; // Move left
            case 'd': movePlayer(1, 0); break;  // Move right
            case ' ': attack(); break;           // Attack with animation
            case 'q': return 0;                  // Quit the game
        }
    }
    return 0; // End of the program
}
