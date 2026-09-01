#include <iostream>
#include <climits>
using namespace std;

// Changed return type to void since we are modifying the array directly
void swapSm_Lg(int arr[], int size)
{
    int smallestIdx = 0;
    int largestIdx = 0;

    for (int i = 1; i < size; i++) // Start from 1 since 0 is initialized
    {
        if (arr[i] < arr[smallestIdx])
            smallestIdx = i; // Store the index of the smallest
        if (arr[i] > arr[largestIdx])
            largestIdx = i;  // Store the index of the largest
    }
    
    // Swap the actual values in the array using their indices
    swap(arr[smallestIdx], arr[largestIdx]);
}

int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    int sz = sizeof(arr) / sizeof(arr[0]);
    
    // Call the function to modify the array
    swapSm_Lg(arr, sz);
    
    // Print the modified array
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
