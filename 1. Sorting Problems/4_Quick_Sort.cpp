#include <iostream>
using namespace std;

int partition(int arr[],int lb,int ub){
    int pivot = arr[lb];
    int Start = lb; int End = ub;
    while (Start < End){
        while (arr[Start] <= pivot){
            Start++;
        }
        while (arr[Start] > pivot){
            End--;
        }
        if (Start < End){
            swap(arr[Start],arr[End]);
            return End;
            
        }
    }
    // swap(arr[lb], arr[End]);
    // return End;
}

void QuickSort(int arr[],int lb,int ub){
    if (lb < ub){
        int loc = partition(arr, lb, ub);
        QuickSort(arr, lb, loc-1);
        QuickSort(arr, lb, loc-1);
    }
}

int main(){
    int n;
    cout<<"Enter No. of elements you want in Array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Origional Array : ";
     for(int i=0; i<n; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;

    int lb = 0;
    int ub = n - 1;
    QuickSort(arr, lb, ub);

    cout<<"Sorted Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;

}