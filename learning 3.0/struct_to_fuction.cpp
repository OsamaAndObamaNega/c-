#include <iostream>
#include <string> // Include the string header

struct Car
{
    std::string model; // Corrected spelling from 'mobel' to 'model'
    int year;
    std::string color;
};
void printCar(Car &car){
    // Output the details of car1
    std::cout << "Car : " << car.model << ", Year: " << car.year << ", Color: " << car.color << std::endl;
}
void pantCar(Car &car,std::string color){
    car.color = color;
}

int main(){
    // Create two Car instances
    Car car1;
    Car car2;

    // Initialize car1 attributes
    car1.model = "Toyota Camry"; // Assign a model name
    car1.year = 2020;             // Assign a year
    car1.color = "Blue";          // Assign a color

    // Initialize car2 attributes
    car2.model = "Honda Accord";  // Assign a model name
    car2.year = 2018;             // Assign a year
    car2.color = "Red";           // Assign a color

    pantCar(car1,"black");
    pantCar(car2,"somthign");

    printCar(car1);
    printCar(car2);

    return 0;
}





















// #include <SDL.h>
// #include <iostream>

// // Constants for screen dimensions and player speed
// const int SCREEN_WIDTH = 640;   // Width of the window
// const int SCREEN_HEIGHT = 480;  // Height of the window
// const int PLAYER_SPEED = 5;      // Speed at which the player moves

// // Player class to represent the player character
// class Player {
// public:
//     int x, y;      // Player's position on the screen (x, y coordinates)
//     int speed;     // Speed of the player movement

//     // Constructor to initialize the player's position and speed
//     Player(int x, int y) : x(x), y(y), speed(PLAYER_SPEED) {}

//     // Method to handle keyboard input for player movement
//     void handleInput(SDL_Event e) {
//         if (e.type == SDL_KEYDOWN) { // Check if a key was pressed
//             switch (e.key.keysym.sym) { // Get the key that was pressed
//                 case SDLK_w: // Move up (W key)
//                     y -= speed; // Decrease y to move up
//                     break;
//                 case SDLK_s: // Move down (S key)
//                     y += speed; // Increase y to move down
//                     break;
//                 case SDLK_a: // Move left (A key)
//                     x -= speed; // Decrease x to move left
//                     break;
//                 case SDLK_d: // Move right (D key)
//                     x += speed; // Increase x to move right
//                     break;
//             }
//         }
//     }

//     // Method to render the player on the screen
//     void render(SDL_Renderer* renderer) {
//         // Create a rectangle representing the player
//         SDL_Rect rect = {x, y, 50, 50}; // Player is represented as a 50x50 square
//         SDL_RenderFillRect(renderer, &rect); // Fill the rectangle to render the player
//     }
// };

// int main() {
//     // Initialize SDL library
//     SDL_Init(SDL_INIT_VIDEO); // Initialize video subsystem

//     // Create a window for the game
//     SDL_Window* window = SDL_CreateWindow("WASD Movement", 
//                                           SDL_WINDOWPOS_CENTERED, 
//                                           SDL_WINDOWPOS_CENTERED, 
//                                           SCREEN_WIDTH, 
//                                           SCREEN_HEIGHT, 
//                                           SDL_WINDOW_SHOWN);

//     // Create a renderer for the window
//     SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

//     // Create an instance of the Player class, starting in the center of the screen
//     Player player(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);

//     // Main game loop
//     bool quit = false; // Flag to control the main loop
//     SDL_Event e; // Event variable to handle user input

//     while (!quit) {
//         // Poll for events (like keyboard input)
//         while (SDL_PollEvent(&e)) {
//             if (e.type == SDL_QUIT) { // Check if the window close event was triggered
//                 quit = true; // Set quit flag to true to exit the loop
//             }
//             player.handleInput(e); // Handle player input
//         }

//         // Clear the screen with a black color
//         SDL_RenderClear(renderer);

//         // Render the player on the screen
//         player.render(renderer);

//         // Update the screen to show the rendered content
//         SDL_RenderPresent(renderer);
//     }

//     // Clean up resources before quitting
//     SDL_DestroyRenderer(renderer); // Destroy the renderer
//     SDL_DestroyWindow(window); // Destroy the window
//     SDL_Quit(); // Quit SDL subsystems

//     return 0; // Return success
// }