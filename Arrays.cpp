#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int smallest = INT_MAX; // Initialize smallest to the maximum integer value
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "The smallest element in the array is: " << smallest << endl;

    return 0;
}