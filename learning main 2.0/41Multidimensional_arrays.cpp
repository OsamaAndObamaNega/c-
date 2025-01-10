#include <iostream>
using namespace std;

int main() {
    int arr[3][4] = {               // Declare and initialize the array
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    // Print the 2D array
    for (int i = 0; i < 3; i++) {   // Loop through each row
        for (int j = 0; j < 4; j++) {   // Loop through each column
            cout << arr[i][j] << " ";   // Print each element
        }
        cout << endl;               // New line after each row
    }

    return 0;
}
