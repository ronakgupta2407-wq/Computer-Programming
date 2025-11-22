#include <iostream>
using namespace std;

int main() {
    for(int i = 5; i >= 1; i--) {       // row loop
        for(int j = 1; j <= i; j++) {   // column loop
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
