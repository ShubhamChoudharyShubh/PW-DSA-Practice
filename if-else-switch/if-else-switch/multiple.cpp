#include<iostream>
using namespace std;

  int main(){

       int num;
       cout<<"num:";
       cin>>num;

     if ((num%3==0)&&(num%5==0)){

       cout<<"FIZZ AND BUZZ"<<endl;

    }
    else if(num%5==0){

       cout<<"BUZZ"<<endl;

    }
    else if(num%3==0){

      cout<<"FIZZ"<<endl;
    }
    else{
        
       cout<<"no fizz no buzz"<<endl;

    }

    return 0;
  }