#include<iostream>
using namespace std;
int main(){
        
        int n;
        cin>>n;

        int digits=0;  //610

        while (n>0)
        {
            digits++; 
            n=n/10;
        }
        cout<<digits<<endl;

    return 0;
}