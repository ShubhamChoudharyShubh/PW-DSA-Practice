#include<iostream>
using namespace std;
int main(){

     int n,r,s;
     cout<<"Armstrong Numbers Are :";
     for (n=1; n<=500;n++)
     {
         s=0;
         int x=n; 
         while(x!=0)
         {
           r=x%10;
           s=s+r*r*r;
           x=x/10;
         }
         if(n==s)
         {
            cout<<n<<",";
         }
     }
}