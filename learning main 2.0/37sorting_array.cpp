#include <iostream>
#include <algorithm> // Include the algorithm header for std::sort

int main() {
    int num[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(num) / sizeof(num[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << num[i] << " ";
    }
    std::cout << std::endl;

    // Sort the array using std::sort
    std::sort(num, num + size);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << num[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}