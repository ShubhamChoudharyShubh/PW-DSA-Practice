#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v(6);
    for(int i=0; i<6; i++){
        cin>>v[i];
    }
    cout<<"enter x: ";
    int x;
    cin>>x;
// start  se shuru
    int occurence=-1; 
    for(int i=0; i<v.size(); i++){
        if(v[i]==x){
          occurence=i;
        }
    }

 // end se shuru 
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]==x){
          occurence=i;
          break;
        }
    }     cout<<occurence<<endl;


    return 0;
}