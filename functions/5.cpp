#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int a, b;

    cout << "Enter two numbers a and b: ";
    cin >> a >> b;

    cout << "Prime numbers between " << a << " and " << b << " are:" << endl;

    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
