#include <iostream>
#include "lib.h"

int main() {
    int n = 32;
    std::string name;

    std::cout << "======================" << std::endl;
    std::cout << "   Hello, World!" << std::endl;
    std::cout << "======================" << std::endl;
    std::cout << "LOG: Entering main function" << std::endl;
    something();
    std::cout << "LOG: something() function executed" << std::endl;

    std::cout << "======================" << std::endl;
    std::cout << "The value of n is: " << n << std::endl;
    std::cout << "LOG: Printed value of n" << std::endl;
    std::cout << "======================" << std::endl;

    std::cout << "Please enter your name: ";

    std::cout << "The value of n is: " << n << std::endl;

    std::cout << "Please enter your name: "; 
    std::cin.ignore(); // ignore newline character left in input buffer
    std::getline(std::cin, name); // read entire line for name

    std::cout << "Hello, " << name << "!" << std::endl;

    std::cout << "Press Enter to exit...";

    std::cin.get(); // Wait for user to press Enter
}