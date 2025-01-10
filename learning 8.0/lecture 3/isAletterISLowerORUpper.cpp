#include <iostream>

int main() {
    char letter;
    std::cout << "Enter a letter: ";
    std::cin >> letter;

    if(letter >= 'A' && letter <= 'Z') {
        std::cout << letter << " is an uppercase letter." << std::endl;
    } else if(letter >= 'a' && letter <= 'z') {
        std::cout << letter << " is a lowercase letter." << std::endl;
    } else {
        std::cout << letter << " is not a letter." << std::endl;
    }

    return 0;
}