#include <iostream>
using namespace std;
int main(){

       int n, first, secound, third;
       cout<<"inter three digits number:";
       cin>>n;
     
       first = (n/100)%100;
       secound = (n/10)%10;
       third = (n%10);

     cout<<"sum:"<<first+secound+third<<endl;


    return 0;
}