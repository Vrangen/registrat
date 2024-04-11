#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Structure for storage of storage devices
struct User {
    string username;
    string password;
};

//Function for the registration of the new police station
void registerUser() {
    User newUser;

    // Username request
    cout << "Enter your username: ";
    cin >> newUser.username;

    // Password Request
    cout << "Enter password: ";
    cin >> newUser.password;

    // Create a file for a new user and save his data
    ofstream userFile(newUser.username + ".txt");
    if (userFile.is_open()) {
        userFile << "username: " << newUser.username << endl;
        userFile << "Password: " << newUser.password << endl;
        userFile.close();
        cout << "User data saved successfully." << endl;
    }
    else {
        cout << "Error saving user data." << endl;
    }
}

int main() {
    // New user registration example
    registerUser();

    return 0;
}