#include<iostream>
using namespace std;
int main(){

      int n=9;
      int ans=0;
      while(n>0)
      {
        int parity = n%2;
        if(parity==0){
            ans++;
        }
        n=n/2;
      }
      cout<<ans;
      
    return 0;
}

