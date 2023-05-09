#include <iostream>
using namespace std;

int main() {
    int num, first, second_last, sum;
    
    cout << "Enter a 5 digit number: ";
    cin >> num;
    
    first = num / 10000;            // Extracting the first digit
    second_last = (num / 10) % 10;  // Extracting the second last digit
    sum = first + second_last;      // Calculating the sum
    
    cout << "The sum of the first and second last digit is: " << sum << endl;
    
    return 0;
}
