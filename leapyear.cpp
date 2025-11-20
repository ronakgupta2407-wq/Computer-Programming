#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter Year: ";
    cin >> a;

  
    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
        cout << "Year is Leap" << endl;
    } else {
        cout << "Not A Leap Year" << endl;
    }

    return 0;
}
