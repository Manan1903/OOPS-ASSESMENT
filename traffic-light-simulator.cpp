//take current traffic light colour (R/G/Y) and duration as input
// Use if else statements to determine the next traffic light colour and timing
// RED(30s) -> GREEN(45s) -> YELLOW(5s) -> RED(30s) -> ...
#include <iostream>
#include <string>   
using namespace std;

int main() {
    string currentColor;
    int duration;

    // Take current traffic light color and duration as input
    cout << "Enter current traffic light color (R/G/Y): ";
    cin >> currentColor;
    cout << "Enter duration (in seconds): ";
    cin >> duration;

    // Determine next traffic light color and timing
    if (currentColor == "R") {
        cout << "Next color: GREEN, Duration: 45 seconds" << endl;
    } else if (currentColor == "G") {
        cout << "Next color: YELLOW, Duration: 5 seconds" << endl;
    } else if (currentColor == "Y") {
        cout << "Next color: RED, Duration: 30 seconds" << endl;
    } else {
        cout << "Invalid color input." << endl;
    }

    return 0;
}
