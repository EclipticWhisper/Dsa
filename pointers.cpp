#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int *ptr = &a; // Pointer to integer, storing the address of a

    cout << "Value of a: " << a << endl;    // Output the value of a
    cout << "Address of a: " << &a << endl; // Output the address of a
    cout << "Value stored in ptr (address of a): " << ptr << endl;
}