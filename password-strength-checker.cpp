//Take a password string as input
//Uses while loop to analyze each character
//Counts uppercase ,lowercase, digits, and special characters
//Uses nested if statements to determine password strength
//Display detailed Analysis of password strength
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
    string strength;
    if (upperCount > 0 && lowerCount > 0 && digitCount > 0 && specialCount > 0 && password.length() >= 8) {
        strength = "Strong";
    } else if ((upperCount > 0 || lowerCount > 0) && digitCount > 0 && password.length() >= 6) {
        strength = "Medium";
    } else {
        strength = "Weak";
    }

    // Display detailed analysis of password strength
    cout << "Password Analysis:" << endl;
    cout << "Uppercase letters: " << upperCount << endl;
    cout << "Lowercase letters: " << lowerCount << endl;
    cout << "Digits: " << digitCount << endl;
    cout << "Special characters: " << specialCount << endl;
    cout << "Password Strength: " << strength << endl;

    return 0;
}