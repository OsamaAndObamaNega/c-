#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    int target = 9;

    int array[] = {2, 7, 11, 15};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) { // Ensure `i` is not equal to `j`
            if (array[i] + array[j] == target) { // Compare the values, not indices
                vec.push_back(i);
                vec.push_back(j);
                break; // Exit the inner loop as we found a solution
            }
        }
        if (!vec.empty()) break; // Exit outer loop if a solution is found
    }

    if (!vec.empty()) {
        std::cout << "Indices: " << vec[0] << ", " << vec[1] << '\n';
    } else {
        std::cout << "No solution found.\n";
    }

    return 0;
}
