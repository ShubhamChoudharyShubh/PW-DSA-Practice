#include<iostream>
using namespace std;

   int main(){

     int a=1;
     cout<<sizeof(a)<<endl; //4

     char name='a';
     cout<<sizeof(name)<<endl; //1

     bool flag;
    a==name? flag=true : flag=false;
    cout<<flag<<endl; //0 matlab flase

    cout<<&a<<endl;

    int c=6;
    cout<<(c++)<<endl; //6

    int b=c+5;
    cout<<(b)<<endl; //12
   }