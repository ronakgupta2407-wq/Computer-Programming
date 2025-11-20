#include <iostream>
#include <string>


using namespace std; 

int main() {
    int number;
    int sum_of_digits = 0;
    cout<<"Enter A number:";
    cin >> number;

    
    string number_str = to_string(number);

    
    for (char digit_char : number_str) {
       
        int digit = digit_char - '0';
        
       
        sum_of_digits += digit;
    }

    // Output is cleaner without 'std::' prefixes
    cout << "The number is: " << number << endl;
    cout << "The sum of its digits is: " << sum_of_digits << endl;
    
    return 0;
}
