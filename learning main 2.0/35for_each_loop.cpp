#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    for (int num : numbers) { // Simple for-each loop
        std::cout << num << std::endl; // Print each number
    }

    return 0;
}