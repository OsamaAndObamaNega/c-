#include "include.h"

int main() {
    UserData user;
    string baseFolderPath = "E:\\c++\\projects\\project_file\\Users";
    string dataFilePath = baseFolderPath + "/users.txt";

    // Ensure the base folder exists
    fs::create_directory(baseFolderPath);

    // Get and validate username
    do {
        cout << "Enter username: ";
        cin >> user.username;
        if (!validateUsername(user.username)) {
            cerr << "Invalid username. Please try again." << endl;
        } else if (checkIfUserExists(user.username, dataFilePath)) {
            cerr << "Username already exists. Please try again." << endl;
        }
    } while (!validateUsername(user.username) || checkIfUserExists(user.username, dataFilePath));

    // Get and validate password
    do {
        cout << "Enter password: ";
        cin >> user.password;
        if (!validatePassword(user.password)) {
            cerr << "Invalid password. Please try again." << endl;
        }
    } while (!validatePassword(user.password));

    // Get and validate email
    do {
        cout << "Enter recovery email: ";
        cin >> user.email;
        if (!validateEmail(user.email)) {
            cerr << "Invalid email address. Please try again." << endl;
        }
    } while (!validateEmail(user.email));

    // Get the next user number
    int userNumber = getNextUserNumber(dataFilePath);

    // Get the current timestamp
    user.timestamp = getCurrentTimestamp();

    // Save user data
    if (!saveUserData(user, dataFilePath, userNumber)) {
        cerr << "Error saving user data." << endl;
        return 1;
    }

    // Create user folder
    if (!createUserFolder(user.username, baseFolderPath)) {
        cerr << "Error creating user folder." << endl;
        return 1;
    }

    // Registration successful
    cout << "User registered successfully!" << endl;

    // Call mainProggeam.cpp
    system("g++ ../scr/main.cpp ../lib/mainProggeam.cpp -o ../bin/mainProgram && ../bin/mainProgram");

    return 0;
}