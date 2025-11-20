#include <iostream>
#include <cmath>

using namespace std;

/**
 * @brief Checks if a given integer is a prime number using the basic trial division method up to the square root of the number.
 * @param n The integer to check.
 * @return true if n is prime, false otherwise.
 */
bool isPrime(int n) {
    // Numbers less than or equal to 1 are not prime.
    if (n <= 1) {
        return false;
    }

    // Check for divisors starting from 2 up to the square root of n.
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false; // Found a divisor, so it's not prime.
        }
    }

    return true; // No divisors found, so it is prime.
}

int main() {
    int num;
    cout << "Enter a positive integer: ";

    // Ensure valid input
    if (!(cin >> num)) {
        cerr << "Invalid input. Please enter a valid integer." << endl;
        return 1;
    }

    // Call the isPrime function and display the result
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
