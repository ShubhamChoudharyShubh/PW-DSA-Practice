#include <iostream>
using namespace std;
int main()
{
int num1;
int num2;
cout<<"Enter the two binary numbers : ";
cin>>num1>>num2;
int pw = 1;
int dec1=0;
int dec2=0;
while (num1 > 0) { //converting num1 to decimal
int units_digit = num1 % 10;
dec1 += pw * units_digit;
num1 /= 10;
pw *= 2;
}
pw=1;
while (num2 > 0) { //converting num2 to decimal
int units_digit = num2 % 10;
dec2 += pw * units_digit;
num2 /= 10;
pw *= 2;
}
if(dec1>dec2) //comparing the decimal numbers dec1 and dec2
{
cout<<"The greater number is : "<<dec1;
}else{
cout<<"The greater number is : "<<dec2;
}
}