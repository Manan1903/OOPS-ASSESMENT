// Use a global variable totalBankBalance to keep track of the total balance in the bank.
// create functions deposit, withdraw, and displayBalance.
// The deposit function should add the amount to totalBankBalance.
// The withdraw function should subtract the amount from totalBankBalance if sufficient funds are available.
// The displayBalance function should print the current totalBankBalance.

#include <iostream>
using namespace std;

// Global variable
double totalBankBalance; // Will be set by user

// Deposit function
void depositMoney(double amount, double &accountBalance) {
    static int depositCount = 0;
    accountBalance += amount;
    totalBankBalance += amount;
    depositCount++;
    cout << "Deposited " << amount << " (Deposit " << depositCount << ")\n";
}

// Withdraw function
void withdrawMoney(double amount, double &accountBalance) {
    static int withdrawCount = 0;
    if (amount <= accountBalance) {
        accountBalance -= amount;
        totalBankBalance -= amount;
        withdrawCount++;
        cout << "Withdrew " << amount << " (Withdrawal " << withdrawCount << ")\n";
    } else {
        cout << "Not enough money in your account!\n";
    }
}

// Display balances
void displayBalances(double accountBalance) {
    cout << "\n--- Balances ---\n";
    cout << "Your Account Balance: " << accountBalance << endl;
    cout << "Total Bank Balance: " << totalBankBalance << endl;
}

int main() {
    double accountBalance;
    double amount;
    int choice;

    // Input initial balances
    cout << "Enter your initial account balance: ";
    cin >> accountBalance;

    cout << "Enter total initial bank balance: ";
    cin >> totalBankBalance;

    cout << "\nWelcome to the Bank System!\n";
    displayBalances(accountBalance);

    // Menu loop using if-else
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Show Balances\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            depositMoney(amount, accountBalance);
        }
        else if (choice == 2) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            withdrawMoney(amount, accountBalance);
        }
        else if (choice == 3) {
            displayBalances(accountBalance);
        }
        else if (choice == 4) {
            cout << "Thank you for using our banking system!\n";
            break; // Exit the loop
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}