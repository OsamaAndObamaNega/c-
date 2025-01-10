#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <regex>
#include <system_error>
#include <chrono>
#include <iomanip>

// Using necessary namespaces
using namespace std;
namespace fs = std::filesystem;

// User data structure
struct UserData {
    string username;
    string password;
    string email;
    string timestamp;
};

// Function to validate username
bool validateUsername(const string& username);

// Function to validate password
bool validatePassword(const string& password);

// Function to validate email
bool validateEmail(const string& email);

// Function to check if user already exists
bool checkIfUserExists(const string& username, const string& filePath);

// Function to get the next user number
int getNextUserNumber(const string& filePath);

// Function to get the current timestamp
string getCurrentTimestamp();

// Function to save user data to a file
bool saveUserData(const UserData& user, const string& filePath, int userNumber);

// Function to create a folder for the user
bool createUserFolder(const string& username, const string& baseFolderPath);
