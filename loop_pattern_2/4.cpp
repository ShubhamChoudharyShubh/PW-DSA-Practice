#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
     
    int reverce=0;
    
    while(n>0){
         int lastdigit = n%10;
         reverce=reverce*10+lastdigit;
         n/=10;
    }

     cout<<reverce<<endl;
    return 0;
}