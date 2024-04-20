#include <iostream>
using namespace std;

void LinearSearching(int arr[], int n){
    int target;
    cout<<"Enter the target value to search : ";
    cin>>target;
    for(int i=0; i<n; i++){
        if (target == arr[i]){
            cout<<"Value is present at index : "<<i;
            break;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the No. of arrays : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements of an array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    LinearSearching(arr, n);
    return 0;
}