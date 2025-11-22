#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if(n == 0 || n == 1) {   // base case
        return 1;
    }
    return n * factorial(n - 1);   // recursive call
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num < 0) {
        cout << "Factorial of a negative number doesn't exist.";
    } else {
        cout << "Factorial of " << num << " is " << factorial(num);
    }

    return 0;
}
