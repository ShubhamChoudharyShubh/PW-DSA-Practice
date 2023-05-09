#include<iostream>
using namespace std;
int main(){

   int n;
   cin>>n;
   int power=1;
   int ans=0;
   while(n>0)
   {
    int paritydigit = n%2;
    ans=ans+paritydigit*power;
    power=power*10;
    n=n/2;
   }
    cout<<ans;

    return 0;
}