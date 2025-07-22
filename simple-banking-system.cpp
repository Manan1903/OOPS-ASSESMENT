// Use a global variable totalBankBalance to keep track of the total balance in the bank.
// create functions deposit, withdraw, and displayBalance.
// The deposit function should add the amount to totalBankBalance.
// The withdraw function should subtract the amount from totalBankBalance if sufficient funds are available.
// The displayBalance function should print the current totalBankBalance.

#include<iostream>
using namespace std;

int totalBankBalance = 0;

void deposit(int amount) {
    totalBankBalance += amount;
}

void withdraw(int amount) {
    if (amount <= totalBankBalance) {
        totalBankBalance -= amount;
    } else {
        cout << "Insufficient funds!" << endl;
    }
}

void displayBalance() {
    cout << "Total Bank Balance: " << totalBankBalance << endl;
}

int main() {
    deposit(1000);
    displayBalance();
    withdraw(500);
    displayBalance();
    withdraw(600);
    return 0;
}