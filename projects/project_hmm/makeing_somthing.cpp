#include <iostream>
#include <string>
#include <regex> // For regex validation
#include <filesystem>
#include <fstream>      // For file operations
#include <cctype>       // For isalnum

namespace fs = std::filesystem;

// Function to validate email
bool isValidEmail(const std::string &email)
{
    // Check if the email ends with "@gmail.com" and has a valid format
    std::regex emailRegex("^[a-zA-Z0-9._%+-]+@gmail\\.com$");
    return std::regex_match(email, emailRegex);
}

// Function to validate password
bool isValidPassword(const std::string &password)
{
    return password.length() > 8; // Check if password length is greater than 8
}

std::pair<std::string, std::string> Gmail_Password(std::string email, std::string password)
{

    // Loop until valid email and password are entered
    while (true)
    {
        // Input email
        std::cout << "Enter your email address: ";
        std::getline(std::cin, email);

        // Input password
        std::cout << "Enter your password: ";
        std::getline(std::cin, password);

        // Validate email and password
        if (!isValidEmail(email))
        {
            std::cout << "Invalid email! Please ensure it is in the correct format and ends with '@gmail.com'.\n";
        }
        else if (!isValidPassword(password))
        {
            std::cout << "Invalid password! Password must be longer than 8 characters.\n";
        }
        else
        {
            std::cout << "Email and password are valid.\nMoving to the next part...\n";

            return std::make_pair(email, password);
            break; // Exit the loop when both email and password are valid
        }
    }
}

/***************************************************************************************************** */


namespace fs = std::filesystem;

// Function to validate the username
bool isValidUsername(const std::string &username) {
    // Check length and allowed characters
    if (username.length() < 3 || username.length() > 15)
        return false;
    for (char c : username) {
        if (!isalnum(c) && c != '_')
            return false;
    }
    return true;
}

// Function to check if the username is unique
bool isUsernameUnique(const std::string &username, const std::string &basePath) {
    // Check if the directory for the username already exists
    return !fs::exists(fs::path(basePath) / username);
}

// Function to handle username input and account creation
std::string UserName(std::string username, const std::string &basePath) {

    while (true) {
        std::cout << "Enter a username (3-15 characters, only letters, numbers, and underscores): ";
        std::getline(std::cin, username); // getline to handle full input

        if (username.empty()) {
            std::cout << "Invalid username! Username cannot be empty. Please try again.\n";
            continue;
        }

        if (!isValidUsername(username)) {
            std::cout << "Invalid username! Please follow the rules and try again (3-15 characters, only letters, numbers, and underscores).\n";
            continue;
        }

        if (!isUsernameUnique(username, basePath)) {
            std::cout << "The username is already taken. Please try another one.\n";
            continue;
        }

        // If the input is valid and unique, break the loop
        break;
    }

    // Create the folder for the username
    try {
        fs::create_directory(fs::path(basePath) / username);
        std::cout << "Successfully created your account with username: " << username << std::endl;

        // Create a file named <username>_DT in the new folder
        std::string filename_and_username = username + "_DT.txt"; // File name format
        std::ofstream outFile(fs::path(basePath) / username / filename_and_username);

        if (outFile) {
            std::cout << "Your account has been created. You can try to log in using the username and password you created.\n";
        } else {
            std::cerr << "Error creating file: " << filename_and_username << std::endl;
        }
    } catch (const std::exception &e) {
        std::cerr << "Error creating folder: " << e.what() << std::endl;
    }


    return username; // Return the created username
}




void writeToFile(const std::string& filename_and_username, const std::string& username, const std::string& gmail, const std::string& password) {
    // Create an output file stream
    std::ofstream outFile;

    // Open the file (this will create the file if it does not exist)
    outFile.open(filename_and_username, std::ios::app); // Use std::ios::app to append to the file if  exists

    // Check if the file is open
    if (!outFile) {
        std::cerr << "Error opening file: " << filename_and_username << std::endl;
        return;
    }

    // Write the variables to the file
    outFile << username << " " << gmail << " " << password << std::endl;

    // Close the file
    outFile.close();


}


int main()
{
    std::string users_name, Gmail, Password;
    std::string path = "E:\\c++\\project_hmm\\bbbb"; // in future this will be atomated so if it can't find the path then this will make a a folder for this 


    auto gmail_password_returned = Gmail_Password(Gmail, Password);
    users_name = UserName(users_name,path);

    Gmail = gmail_password_returned.first;
    Password = gmail_password_returned.second;
    
    writeToFile(users_name, users_name, Gmail, Password);
	


    return 0;
}



int main(){
    writeToFile("somtasdasdhign", "sonzzmthing:","@gmail.com","98723972$%^&*()");

    return 0;
}

// #include <iostream>
// #include <fstream>      // For file operations
// #include <filesystem>   // For directory operations
// #include <string>

// // Function to create a directory and a file
// void createFileInDirectory(const std::string& path, const std::string& users_name) {
//     // Create the directory if it doesn't exist
//     std::filesystem::create_directories(path);

//     // Construct the full file path
//     std::string file_name = path + "/" + users_name + "_DT.txt";

//     // Create and open the file
//     std::ofstream file(file_name);

//     // Check if the file was created successfully
//     if (file.is_open()) {
//         // Optionally, write something to the file
//         file << "This is a file for user: " << users_name << std::endl;
//         file.close(); // Close the file
//         std::cout << "File created successfully: " << file_name << std::endl;
//     } else {
//         std::cerr << "Error creating the file: " << file_name << std::endl;
//     }
// }

// int main() {
//     // Variables to hold the path and user name
//     std::string path, users_name;

//     // Get the path and user name from the user
//     std::cout << "Enter the path (e.g., test_data): ";
//     std::getline(std::cin, path);
//     std::cout << "Enter the user name: ";
//     std::getline(std::cin, users_name);

//     // Call the function to create the file in the specified directory
//     createFileInDirectory(path, users_name);

//     return 0;
// }



