#include <iostream>
using namespace std;
int main(){
    
     int n;
     cin>>n;

     int power=1;
     int ans=0;

     while(n>0){
          int lastdigit=n%10;
          ans=ans+lastdigit*power;
          power=power*2;
          n=n/10;
     }
     cout<<ans<<endl;


    return 0;
}