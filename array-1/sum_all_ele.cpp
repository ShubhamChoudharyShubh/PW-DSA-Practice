#include <iostream>
using namespace std;

int main(){

  int araay[]={3,4,10,11};
  int size=sizeof(araay)/sizeof(araay[0]);
   int sum=0;
   for(int i=0; i<size; i++){
        sum=sum+araay[i];
   } 

     cout<<sum<<endl;

    return 0;
}