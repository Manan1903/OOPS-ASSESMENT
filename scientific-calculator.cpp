//create variables with different scopes
// implement function for power(int base, int exp), factorial(int n), gcd(int a, int b), and isPrime(int n).
#include <iostream>
using namespace std;

// Function to calculate power
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Function to calculate factorial
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

// Function to calculate GCD
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int base, exp, n, a, b;

    // Input for power function
    cout << "Enter base and exponent for power function: ";
    cin >> base >> exp;
    cout << "Power(" << base << ", " << exp << ") = " << power(base, exp) << endl;

    // Input for factorial function
    cout << "Enter a number for factorial function: ";
    cin >> n;
    cout << "Factorial(" << n << ") = " << factorial(n) << endl;

    // Input for GCD function
    cout << "Enter two numbers for GCD function: ";
    cin >> a >> b;
    cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << endl;

    // Input for prime check
    cout << "Enter a number to check if it is prime: ";
    cin >> n;
    cout << n << (isPrime(n) ? " is prime." : " is not prime.") << endl;

    return 0;
}