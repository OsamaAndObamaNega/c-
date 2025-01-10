#include <iostream>

int main() {
    // Declare a variable to store the user's name
    std::string name;

    // Prompt the user to enter their name
    std::cout << "Please enter your name: ";

    // Use cin to read the user's input
    std::cin >> name;

    // Print out a greeting message with the user's name
    std::cout << "Hello, " << name << "! Nice to meet you." << std::endl;

    return 0;
}