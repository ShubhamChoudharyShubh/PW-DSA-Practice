#include<iostream>
using namespace std;

int main(){
      int even_count=0, odd_count=0;
     int n; // array size
     cout<<"Enter the size of array:-"<<endl;
     cin>>n;
     int array[n]; // array diclaration
     cout<<"Enter the elements of array:-"<<endl;
     for(int i=0; i<n; i++)
     {
        cin>>array[i];
     }

     for(int i=0; i<n; i++)
     {
        if(array[i]%2==0){
          even_count++; 
        }
        else{
            odd_count++;
        }
         }
        cout<<"count of even number is :"<<even_count<<endl;
        cout<<"count of odd number is :"<<odd_count<<endl;
    
return 0;
}
