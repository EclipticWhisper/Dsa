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

int reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
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

    int arr[] = {2, 4, 7, 8, 5, 3};
    int size = 6;

    reverseArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}