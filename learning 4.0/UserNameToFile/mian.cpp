#include <iostream>
#include <string>
#include <regex>
#include <filesystem>
#include <vector>
#include <fstream>
#include "json.hpp"  // Adjust this based on your actual path

bool isValidGmail(const std::string& email) {
    // Check if the email ends with @gmail.com
    if (email.length() < 10 || email.substr(email.length() - 10) != "@gmail.com") {
        return false;
    }

    // Extract the part before @gmail.com
    std::string localPart = email.substr(0, email.length() - 10);

    // Check if the local part is valid
    std::regex validLocalPartRegex("^[a-zA-Z0-9._%+-]+$");
    if (localPart.empty() || !std::regex_match(localPart, validLocalPartRegex)) {
        return false;
    }

    return true;
}

bool isValidUsername(const std::string& username, const std::vector<std::string>& existingFolders) {
    // Check length
    if (username.length() < 3 || username.length() > 24) {
        return false;
    }

    // Check for at least one letter
    if (username.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos) {
        return false;
    }

    // Check for spaces
    if (username.find(' ') != std::string::npos) {
        return false;
    }

    // Check if username is unique
    for (const auto& folder : existingFolders) {
        if (folder == username) {
            return false;
        }
    }

    // Check if username consists solely of numbers
    if (std::all_of(username.begin(), username.end(), ::isdigit)) {
        return false;
    }

    return true;
}

void createFolder(const std::string& username, const std::string& basePath) {
    std::filesystem::path folderPath = std::filesystem::path(basePath) / username;
    if (std::filesystem::create_directory(folderPath)) {
        std::cout << "Folder created: " << folderPath << std::endl;
    } else {
        std::cout << "Failed to create folder: " << folderPath << std::endl;
    }
}

void createMainJson(const std::string& username, const std::string& email) {
    // Create the JSON object for main.json
    nlohmann::json mainJson;
    mainJson[username] = {{"email", email}};
    
    // Write to main.json file
    std::ofstream mainFile("main.json");
    if (mainFile.is_open()) {
        mainFile << mainJson.dump(4); // Pretty print with indent
        mainFile.close();
        std::cout << "User data saved in main.json." << std::endl;
    } else {
        std::cout << "Failed to open main.json for writing." << std::endl;
    }
}

void createUserJson(const std::string& username) {
    // Create the JSON object for user.json
    nlohmann::json userJson;
    userJson["settings"] = {
        {"theme", "light"},  // Example setting, you can add more here
        {"language", "English"}
    };
    userJson["login_data"] = {
        {"last_login", "2024-12-14T12:00:00Z"}  // Example data, adjust as needed
    };

    // Write to user.json file
    std::ofstream userFile(username + "_user.json");
    if (userFile.is_open()) {
        userFile << userJson.dump(4); // Pretty print with indent
        userFile.close();
        std::cout << "User settings saved in " << username << "_user.json." << std::endl;
    } else {
        std::cout << "Failed to open " << username << "_user.json for writing." << std::endl;
    }
}

int main() {
    std::vector<std::string> existingFolders; // Simulating existing folders
    std::string basePath = "E:/c++/learning 4.0/UserNameToFile/user"; // Change this to your desired path

    // Input from user
    std::string email;
    std::string username;

    // Get the email address and validate it
    while (true) {
        std::cout << "Enter your Gmail address: ";
        std::getline(std::cin, email);

        if (isValidGmail(email)) {
            std::cout << "Valid Gmail address." << std::endl;
            break;  // Exit the loop if the email is valid
        } else {
            std::cout << "Invalid Gmail address. Please enter a valid Gmail address." << std::endl;
        }
    }

    // Get the username and validate it
    while (true) {
        std::cout << "Enter your username: ";
        std::getline(std::cin, username);

        if (isValidUsername(username, existingFolders)) {
            break; // Exit the loop if the username is valid
        } else {
            std::cout << "Invalid username. Please try again." << std::endl;
        }
    }

    // Create the folder for the username
    createFolder(username, basePath);

    // Create the main JSON file
    createMainJson(username, email);

    // Create the user-specific JSON file
    createUserJson(username);

    return 0;
}
