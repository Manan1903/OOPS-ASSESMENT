//Take a password string as input
//Uses while loop to analyze each character
//Counts uppercase ,lowercase, digits, and special characters
//Uses nested if statements to determine password strength
#include <iostream>
#include <string>
using namespace std;
int main() {
    string password;
    int upperCount = 0, lowerCount = 0, digitCount = 0, specialCount = 0;

    // Take password input
    cout << "Enter a password: ";
    cin >> password;

    // Analyze each character in the password
    for (char ch : password) {
        if (isupper(ch)) {
            upperCount++;
        } else if (islower(ch)) {
            lowerCount++;
        } else if (isdigit(ch)) {
            digitCount++;
        } else {
            specialCount++;
        }
    }

    // Determine password strength
    if (password.length() < 8) {
        cout << "Password is too short." << endl;
    } else if (upperCount > 0 && lowerCount > 0 && digitCount > 0 && specialCount > 0) {
        cout << "Password is strong." << endl;
    } else if ((upperCount > 0 || lowerCount > 0) && digitCount > 0) {
        cout << "Password is medium." << endl;
    } else {
        cout << "Password is weak." << endl;
    }

    return 0;
}