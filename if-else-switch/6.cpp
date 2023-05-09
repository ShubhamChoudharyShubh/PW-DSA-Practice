#include <iostream>
using namespace std;
int main(){

     int marks;
     cout<<"inter your marks:";
     cin>>marks;

     if(marks>=90){
        cout<<"your grade is A+";
     }
     else if (marks>=80){
        cout<<"your grade is A";
     }
     else if (marks>=70){
        cout<<"your grade is B";
     }
     else if (marks>=60){
        cout<<"your grade is C";
     }
     else if (marks>=50){
        cout<<"your grade is D";
     }
     else if (marks>=40){
        cout<<"your grade is E";
     }
     else if(marks>=30){
        cout<<"your grade is F";
     }
     else {
        cout<<"Fail";
     }

    return 0;
}