#include <iostream>
using namespace std;

// Function to print all odd numbers between a and b
void printOddNumbers(int a, int b) {
    // Ensure that a is odd
    // 
    if (a % 2 == 0) {
        a++;
    }
    
    // Print all odd numbers between a and b
    for (int i = a; i <= b; i=i+2) {
        cout << i << " ";
    }
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Odd numbers between " << a << " and " << b << " are: ";
    printOddNumbers(a, b);
    return 0;
}

/* #include <iostream>
using namespace std;

int odd(int num1, int num2){
   for(int i=num1; i<=num2; i++){
    if(i%2!=0){
        cout<<i<<" ";
    }
   }
}

int main(){
    int a,b;
    cin>>a>>b;
    odd(a,b);

}  */

