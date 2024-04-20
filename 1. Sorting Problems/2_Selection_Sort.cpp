#include <iostream>
using namespace std;

void SelectioSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        
        // If no two elements were swapped in inner loop, the array is already sorted
        if ( min != i) {
            swap(arr[i],arr[min]);
        }
    }
}

int main() {
    // int arr[] = {64, 25, 12, 22, 11};
    // int n = sizeof(arr) / sizeof(arr[0]);

     int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;

    SelectioSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    return 0;
}
