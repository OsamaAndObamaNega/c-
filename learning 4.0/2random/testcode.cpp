#include <iostream>
#include <fstream> // Include the fstream library for file operations
#include <string>
#include <vector>

int main() {
    // Define the filename and content
    std::string filename = "output.txt";
    std::vector<std::string> content = {
        "Hello, this is a sample text written to a file.\n",
        "Something else\n" // Corrected spelling and added newline for better readability
    };

    // Create an output file stream in append mode
    std::ofstream outFile(filename, std::ios::app);

    // Check if the file is open
    if (outFile.is_open()) {
        // Write each string in the vector to the file
        for (const auto& line : content) {
            outFile << "line"; // Write each line to the file
        }

        // Close the file
        outFile.close();
        std::cout << "Content appended to " << filename << std::endl;
    } else {
        std::cerr << "Unable to open file " << filename << std::endl;
    }

    return 0;
}



// #include <iostream>
// #include <fstream> // Include the fstream library for file operations
// #include <string>

// int main() {
//     // Define the filename
//     std::string filename = "output.txt";
//     std::string line;
//     int lineNumber;

//     // Ask the user for the line number
//     std::cout << "Enter the line number you want to read: ";
//     std::cin >> lineNumber;

//     // Create an input file stream
//     std::ifstream inFile(filename);

//     // Check if the file is open
//     if (inFile.is_open()) {
//         // Initialize a counter for the current line number
//         int currentLine = 0;

//         // Read the file line by line
//         while (std::getline(inFile, line)) {
//             currentLine++;
//             // Check if the current line number matches the user input
//             if (currentLine == lineNumber) {
//                 std::cout << "Line " << lineNumber << ": " << line << std::endl;
//                 break; // Exit the loop after finding the desired line
//             }
//         }

//         // If the line number was not found
//         if (currentLine < lineNumber) {
//             std::cout << "The file has only " << currentLine << " lines." << std::endl;
//         }

//         // Close the file
//         inFile.close();
//     } else {
//         std::cerr << "Unable to open file " << filename << std::endl;
//     }

//     return 0;
// }