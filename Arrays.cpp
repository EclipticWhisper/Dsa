#include <iostream>
using namespace std;

int product_add(int arr[], int size)
{
    int product = 1;
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
        sum += arr[i];
    }

    return product + sum;
}

int main()
{
    int arr[] = {1, 2, 3};
    int size = 3;
    cout << product_add(arr, size) << endl;
    return 0;
}