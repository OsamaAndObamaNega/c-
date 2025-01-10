#include <iostream>
#include <ctime>

int main() {
    srand(time(0));
    int randnum = rand() % 5 + 1;

    switch (randnum) {
        case 1:
            std::cout << "You want a bumper sticker (1)" << std::endl;
            break;
        case 2:
            std::cout << "You want a [insert item here] (2)" << std::endl;
            break;
        case 3:
            std::cout << "You want a t-shirt (3)" << std::endl;
            break;
        case 4:
            std::cout << "You want a sticker (4)" << std::endl;
            break;
        case 5:
            std::cout << "You want a bumper sticker (5)" << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
    }

    return 0;
}
