#include <iostream>
using namespace std;

void Merge(int arr[], int mid, int lb, int ub) {
    int i = lb;
    int j = mid + 1;
    int k = lb;
    int b[ub + 1];  // Declare an auxiliary array to store merged values

    while (i <= mid && j <= ub) {
        if (arr[i] < arr[j]) {
            b[k] = arr[i];
            i++;
        } else {
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from the left subarray (if any)
    while (i <= mid) {
        b[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining elements from the right subarray (if any)
    while (j <= ub) {
        b[k] = arr[j];
        j++;
        k++;
    }

    // Copy merged values back to the original array
    for (int x = lb; x <= ub; x++) {
        arr[x] = b[x];
    }
}

void MergeSort(int arr[], int lb, int ub) {
    if (lb < ub) {
        int mid = lb + (ub - lb) / 2;
        MergeSort(arr, lb, mid);
        MergeSort(arr, mid + 1, ub);
        Merge(arr, mid, lb, ub);
    }
}

int main() {
    int n;
    cout << "Enter No. of elements you want in Array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    int lb = 0;
    int ub = n - 1;
    MergeSort(arr, lb, ub);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
