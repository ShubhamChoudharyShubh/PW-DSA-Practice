#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int arr[6] = {5,6,2,8,10,9};
    int leftMax[n], rightMin[n];

    leftMax[0] = arr[0];
    for(int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i-1], arr[i]);
    }

    rightMin[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--) {
        rightMin[i] = min(rightMin[i+1], arr[i]);
    }

    for(int i = 1; i < n-1; i++) {
        if(arr[i] > leftMax[i-1] && arr[i] < rightMin[i+1]) {
            cout << "The required element is " << arr[i] << endl;
            break;
        }
    }
    return 0;
}
