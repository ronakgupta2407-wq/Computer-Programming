#include <iostream>
#include <cmath>

using namespace std;


bool isPrime(int n) {
   
    if (n <= 1) {
        return false;
    }

   
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false; 
        }
    }

    return true; 
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
