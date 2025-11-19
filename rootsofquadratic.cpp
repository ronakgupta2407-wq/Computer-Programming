#include<iostream>
#include<cmath>

using namespace std;

int main() {
    double a, b, c;
    double root1, root2;   // corrected variable type

    cout << "Enter The Value of a" << endl;
    cin >> a;

    cout << "Enter The Value of b" << endl;
    cin >> b;

    cout << "Enter the Value of c" << endl;
    cin >> c;

    // Correct quadratic root formula (one root)
    root1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
     root2= (-b - sqrt(b*b - 4*a*c)) / (2*a);

    cout << "Root of Equation = " << root1 << endl;
    cout <<"Root of Equation = " <<root2 <<endl;
}
