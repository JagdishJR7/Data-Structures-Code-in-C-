#include <iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            return false;
        }
    }
    return true;
}

int BinarySearch(int arr[], int n, int target)
{
    if (!isSorted(arr, n))
    {
        cout << "Array is not sorted. Please sort the array before performing binary search." << std::endl;
        return -1;
    }
    
    int lb = 0;
    int ub = n - 1;

    while (lb <= ub)
    {
        int mid = lb + (ub - lb) / 2; // Calculate the midpoint correctly.
        if (target == arr[mid]) // Correct the comparison.
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            ub = mid - 1;
        }
        else
        {
            lb = mid + 1;
        }
    }
    return -1;
}


int main()
{
    int n;
    cout << "Enter the No. of arrays : ";
    cin >> n;
    int arr[n];

    cout << "Enter the Elements of an array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value to search : ";
    cin >> target;

    int result = BinarySearch(arr, n, target);

    if (result != -1)
    {
        cout << "Element found at index : " << result << endl;
    }
    else
    {
        cout << "Elements is not found.";
    }

    return 0;
}