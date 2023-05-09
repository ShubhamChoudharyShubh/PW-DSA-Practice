// #include <iostream>
// using namespace std;

// int vote(int age)
// {
// if(age>18){
//     cout<<"eligible";
// }
// else{
//    cout<<"not eligible";
// }
// return age;
// }

// int main(){
//     int age;
// cout<<"age :";
// cin>>age;
// vote(age);
// }

#include <iostream>
using namespace std;

bool vote(int age)
{
    if(age>18){
        cout<<"eligible";
        return true;
    }
    else{
       cout<<"not eligible";
       return false;
    }
}

int main(){
    int age;
    cout<<"age :";
    cin>>age;
    bool isEligible = vote(age);
    // use isEligible as necessary
}
