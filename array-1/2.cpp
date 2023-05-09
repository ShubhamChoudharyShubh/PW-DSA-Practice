#include <iostream>
using namespace std;

int main(){
 int n;
 cout<<"enter the n number"<<endl;
 cin>>n;

 int array[n];
 cout<<"enter the elemnt of array"<<endl;
 for(int i=0; i<5; i++){
    cin>>array[i];
 }
int max=array[0];
int min=array[0];

for(int i=0; i<5; i++){
    if(array[i]>max){
        max=array[i];
    }
    else if(array[i]<min){
        {
            min=array[i];
        }
        
    }

}
       cout<<"max+min="<<(max+min)<<endl;

    return 0;
}