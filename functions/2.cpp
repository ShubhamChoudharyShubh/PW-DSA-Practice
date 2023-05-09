// #include <iostream>
// using namespace std;


// double Circle(double radius) {
//     double area = 3.14159 * radius * radius;
//     double circumference = 2 * 3.14159 * radius;
//     cout << "Area: " << area << endl;
//     cout << "Circumference: " << circumference << endl;
// }

// int main() {
//     double radius;
//     cout << "Enter the radius of the circle: ";
//     cin >> radius;
//     Circle(radius);
//     return 0;
// }

/* #include <iostream>
using namespace std;
double circum(int r)
{
double cir=2*3.14*r;
return cir;
}
double area(int r)
{
double ar=3.14*r*r;
return ar;
}
int main()
{
cout<<"Enter the radius : ";
int r;
cin>>r;
cout<<"Area : "<<area(r)<<endl;
cout<<"Circumference : "<<circum(r);
} */

#include<iostream>
using namespace std;
double area(int r){
    double area=3.14*r*r;
    return area;
}
double circum(int r){
    double circum=2*3.14*r;
    return circum;
}
int main (){
    int r;
    cin>>r;
    cout<<area(r)<<endl;
    cout<<circum(r)<<endl;
    return 0;
}