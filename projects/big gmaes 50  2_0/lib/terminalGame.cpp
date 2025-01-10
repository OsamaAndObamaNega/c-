#include <iostream>
#include <conio.h> // For _getch() to capture keyboard input
#include <thread>  // For sleep and threading
#include <chrono>  // For duration
#include <atomic>  // For atomic flag

const int width = 30;  // Width of the grid
const int height = 30; // Height of the grid
char grid[height][width]; // 2D array to represent the game grid

int playerX = 1, playerY = 1; // Player's starting position
int enemyX = 28, enemyY = 15;  // Enemy's position
std::atomic<bool> attackInProgress(false); // Flag to indicate if an attack is in progress

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
    grid[playerY][playerX] = 'P'; // Place player on the grid
    grid[enemyY][enemyX] = 'E';   // Place enemy on the grid
}

// Function to draw the entire grid
void drawGrid() {
    std::cout << "\033[2J\033[H"; // Clear the screen and move cursor to top-left
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            std::cout << grid[y][x];
        }
        std::cout << std::endl;
    }
}

// Function to update the position of a character on the grid
void updatePosition(int x, int y, char ch) {
    grid[y][x] = ch;
    std::cout << "\033[" << y + 1 << ";" << x + 1 << "H" << ch;
}

// Function to move the player on the grid
void movePlayer(int dx, int dy) {
    int newX = playerX + dx; // Calculate new X position
    int newY = playerY + dy; // Calculate new Y position

    // Check for walls to prevent moving into them
    if (grid[newY][newX] != '#') {
        updatePosition(playerX, playerY, ' '); // Clear old position
        playerX = newX; // Update player X position
        playerY = newY; // Update player Y position
        updatePosition(playerX, playerY, 'P'); // Place player in the new position
    }
}

// Function to handle attacking the enemy with animation
void attack() {
    if (attackInProgress.exchange(true)) {
        return; // If an attack is already in progress, do nothing
    }

    int attackX = playerX + 1; // Start attack position
    int bulletY = playerY; // Bullet's Y position

    // Animate the attack
    while (attackX < width && grid[bulletY][attackX] != '#') {
        updatePosition(attackX, bulletY, '-'); // Show the attack
        std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Pause for effect (faster)

        // Check if the attack hits the enemy
        if (grid[bulletY][attackX] == 'E') {
            updatePosition(enemyX, enemyY, ' '); // Eliminate the enemy
            break; // Stop the animation
        }

        updatePosition(attackX, bulletY, ' '); // Clear the attack position
        attackX++;
    }

    attackInProgress = false; // Reset the flag to indicate the attack is complete
}

// Main function to run the game
void playTerminalGame() {
    initializeGrid(); // Set up the game grid
    drawGrid(); // Draw the entire grid

    while (true) { // Main game loop
        if (_kbhit()) { // Check if a key has been pressed
            char input = _getch(); // Get user input without waiting for Enter

            // Handle user input for movement and actions
            switch (input) {
                case 'w': movePlayer(0, -1); break; // Move up
                case 's': movePlayer(0, 1); break;  // Move down
                case 'a': movePlayer(-1, 0); break; // Move left
                case 'd': movePlayer(1, 0); break;  // Move right
                case ' ': std::thread(attack).detach(); break; // Attack with animation in a separate thread
                case 'q': return; // Quit the game
            }
        }
    }
}
