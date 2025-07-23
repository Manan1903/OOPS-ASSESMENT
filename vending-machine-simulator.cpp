//Display available items with prices using arrays and loops
//Uses switch-case to handle item slection
//Uses do-while loop for money insertion until sufficient amount 
//Calculates and dispenses change using nested loops
//Continues until user chooses to exit
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    const int numItems = 5;
    string items[numItems] = {"Soda", "Chips", "Candy", "Juice", "Water"};
    double prices[numItems] = {1.50, 1.00, 0.75, 2.00, 1.25};
    int choice;
    double moneyInserted;

    do {
        // Display available items with prices
        cout << "Available items:\n";
        for (int i = 0; i < numItems; i++) {
            cout << i + 1 << ". " << items[i] << " - $" << fixed << setprecision(2) << prices[i] << endl;
        }
        cout << "Enter the number of the item you want to buy (0 to exit): ";
        cin >> choice;

        if (choice < 1 || choice > numItems) {
            if (choice == 0) {
                cout << "Exiting the vending machine." << endl;
                break;
            } else {
                cout << "Invalid choice. Please try again." << endl;
                continue;
            }
        }

        // Handle money insertion
        moneyInserted = 0.0;
        while (moneyInserted < prices[choice - 1]) {
            double amount;
            cout << "Insert money (current total: $" << fixed << setprecision(2) << moneyInserted << "): ";
            cin >> amount;
            if (amount <= 0) {
                cout << "Please insert a valid amount." << endl;
                continue;
            }
            moneyInserted += amount;
        }

        // Dispense item and calculate change
        cout << "Dispensing: " << items[choice - 1] << endl;
        double change = moneyInserted - prices[choice - 1];
        if (change > 0) {
            cout << "Change returned: $" << fixed << setprecision(2) << change << endl;
        } else {
            cout << "No change to return." << endl;
        }

    } while (true);

    return 0;
}