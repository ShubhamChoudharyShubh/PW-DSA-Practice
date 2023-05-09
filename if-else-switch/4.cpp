#include<iostream>
using namespace std;
int main(){
    
    int x;
    cout<<"inter value of x:";
    cin>>x;
    if(x<0){
    cout<<"The number is negative and skipped"<<endl;
    }
    else{
        cout<<"postive:"<<x<<endl;
    }
    return 0;
}