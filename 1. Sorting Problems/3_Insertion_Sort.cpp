#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

int main() {
    // int arr[] = {64, 25, 12, 22, 11};
    // int n = sizeof(arr) / sizeof(arr[0]);

     int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter Elements : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;

    InsertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    return 0;
}
