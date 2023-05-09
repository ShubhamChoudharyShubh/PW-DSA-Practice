#include <iostream>
#include <climits> // for INT_MAX
using namespace std;

int main(){

    int arr[5]={37,77,17,99,45};
    int brr[5]={21,66,2,56,3};
    int amin=INT_MAX; // initialize to high value
    int bmin=INT_MAX; // initialize to high value
    for(int i=0; i<5; i++){
        if(arr[i]<amin){
          amin=arr[i];
        }
        if(brr[i]<bmin){ // use if instead of else if
            bmin=brr[i];
        }
    }

    cout<<(amin+bmin)<<endl; // output 19

    return 0;
}


// #include <iostream>
// using namespace std;

// int main(){

//     int arr[5]={37,77,17,99,45};
//     int brr[5]={21,66,2,56,3};
//     int amin=37;
//     int bmin=21;
//     for(int i=0; i<5; i++){
//         if(arr[i]<amin){
//           amin=arr[i];
//         }
//         else if(brr[i]<bmin){
//             bmin=brr[i];
//         }
//     }

//     cout<<(amin+bmin)<<endl;
//     return 0;
// }