#include <iostream>
#include <climits>
using namespace std;

// void changeArr(int arr[], int size)
// {
//     cout << "In Function: " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = arr[i] * 2;
//         cout << arr[i] << " ";
//     }
// }

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target element is not found
}

int main()
{
    // int arr[] = { 2, 3, 4, 5,1};
    // int size = 5;
    // int smallest = INT_MAX; // Initialize smallest to the maximum integer value
    // int index;
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] < smallest)
    //     {
    //         smallest = arr[i];
    //     }
    //     if (arr[i] == smallest)
    //     {
    //         index = i;
    //     }
    // }

    // cout << "The smallest element in the array is: " << smallest << " at index " << index << endl;

    // Pass by Reference --  it actually passes the address of the array to the function, allowing the function to modify the original array.

    // int arr[] = {1, 2, 3};

    // changeArr(arr, 3);
    // cout << endl
    //      << "In Main: " << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Linear Search Algorithim

    int arr[] = {2, 4, 7, 8, 5, 3, 1};
    int size = 7;
    int target = 5;

    int index = linearSearch(arr, size, target);

    if (index != -1)
    {
        cout << "Element " << target << " found at index " << index << endl;
    }
    else
    {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}