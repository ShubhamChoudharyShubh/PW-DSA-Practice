#include <iostream>
using namespace std;

int main(){

     int array[]={1,2,3,4};
     /* cout<<sizeof(array)<<endl;  
     cout<<sizeof(array)/sizeof(array[0])<<endl; */
    
/*      int array2[4];
     cout<<array2[0]<<endl;
     cout<<array2[1]<<endl;
     cout<<array2[2]<<endl;
     cout<<array2[3]<<endl; */
     
  int size = sizeof(array)/sizeof(array[0]);

 /* // for loop
     for (int idx=0; idx<size; idx++)
     {
        cout<<array[idx]<<endl;
     }

   // for each loop
    for(int ele:array){
    cout<<ele<<endl;
    }
    return 0; 


   // while loop
   int index=0;
   while (index<size)
   {
      cout<<array[index]<<endl;
      index++;
   }  */

   char vowels[5];
  /*  for(int idx=0; idx<5; idx++){
      cin>>vowels[idx];
   } */


   for(char &element:vowels){
        cin>>element;
   }

    for(int idx=0; idx<5; idx++){
      cout<<vowels[idx]<<" ";
   } 
    
}