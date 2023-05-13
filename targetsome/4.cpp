#include <iostream>
#include <climits> // Include the <climits> header for INT_MIN

using namespace std;


// int largestelementindex(int array[], int size){
//     int max=INT_MIN;
//     int maxindex=-1;
//     for (int i = 0; i < size; i++)
//     {
//         if(array[i]>max){
//             max=array[i];
//             maxindex=i;
//         }
//     }
//     return maxindex;
// }

int secoundLargetElement(int array[], int size){
    int max=INT_MIN;
    int secound_max=INT_MIN;

    for(int i=0; i<size; i++){
        if(array[i]>max){
            max=array[i];
        }
    }

    for(int i=0; i<size; i++){
        if(array[i]>secound_max && array[i]!=max){
            secound_max=array[i];
        }
    }

     return secound_max;
}

int main(){


   int array[]={2,3,5,7,6,1,7};
   int n=7;
//    int indexoflargest = largestelementindex(array,7);

//    // array[indexoflargest]=-1;
// int largesstelement = array[indexoflargest];
// for(int i=0; i>7; i++){
//     if(array[i]==largesstelement){
//         array[i]=-1;
//     }
// }

//  int indexofsecoundlagest = largestelementindex(array, 7);
//    cout<<array[indexofsecoundlagest]<<endl;

cout<<secoundLargetElement(array, n)<<endl;

    return 0;
}