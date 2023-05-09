#include<iostream>
using namespace std;
int main(){

     int CP;
     int SP;

     cout<<"Cost Price:";
     cin>>CP;
     cout<<"Selling Price:";
     cin >>SP;

     if(SP>CP){
        cout<<"Profit="<<SP-CP<<endl;
     }
    else if(CP>SP){
        cout<<"Loss="<<CP-SP<<endl;
    }
    else{
        cout<<"no loss no profit"<<endl;
    }
    return 0;
}