#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::cout << "====================" << std::endl;
    std::cout << "Number Analysis" << std::endl;
    std::cout << "====================" << std::endl;

    if (n % 2 == 0) {
        std::cout << n << " is even." << std::endl;
    } else {
        std::cout << n << " is odd." << std::endl;
    }

    if (n > 0) {
        std::cout << n << " is positive." << std::endl;
    } else if (n < 0) {
        std::cout << n << " is negative." << std::endl;
    } else {
        std::cout << n << " is zero." << std::endl;
    }

    std::cout << "====================" << std::endl;

    return 0;
}