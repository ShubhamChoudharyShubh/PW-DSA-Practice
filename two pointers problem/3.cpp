#include<iostream>
#include<vector>
using namespace std;

 void  sortOddAndEven(vector<int> &v){

     int left_ptr=0;
     int right_ptr=v.size()-1;

     while (left_ptr<right_ptr){
        if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
            swap(v[left_ptr], v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if(v[left_ptr]%2==0){
            left_ptr++;
        }
        if(v[right_ptr]%2==1){
            right_ptr--;
                    }
     }
 }


int main(){

   int n;
   cin>>n;

   vector<int> v;
   for(int i=0; i<n; i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
   }

    sortOddAndEven(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;


    return 0;
}