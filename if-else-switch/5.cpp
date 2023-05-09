#include<iostream>
using namespace std;
int main(){

        float x, y;
        cout<<"inter x:";
        cin>>x;
        cout<<"inter y:";
        cin>>y;
        
        char sign;
        cout<<"inter the sign:";
        cin>>sign;

        switch (sign)
        {
        case '+':
           cout<<(x+y);
        break;

        case '-':
            cout<<(x-y);
        break;

        case '*':
            cout<<(x*y);
        break;

        case '/':
            cout<<(x/y);
        break;

        default:
           cout<<"non"<<endl;
        break;
        }
    return 0;
}