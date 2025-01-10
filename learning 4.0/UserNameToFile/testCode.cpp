#include <iostream>
#include <fstream>

int main() {
    std::fstream file;  // General file stream
    file.open("example.txt", std::ios::in);  // Open file in read mode

    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {  // Read each line
            std::cout << line << std::endl; // Print the line
        }
        file.close(); // Close the file
    } else {
        std::cerr << "Error: Unable to open the file for reading!" << std::endl;
    }

    return 0;
}
