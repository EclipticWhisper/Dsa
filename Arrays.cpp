#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = { 2, 3, 4, 5,1};
    int size = 5;
    int smallest = INT_MAX; // Initialize smallest to the maximum integer value
    int index;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] == smallest)
        {
            index = i;
        }
    }

    cout << "The smallest element in the array is: " << smallest << " at index " << index << endl;

    return 0;
}