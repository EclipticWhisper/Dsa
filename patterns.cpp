#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << " " << ch;
            ch = ch + 1; // implicit type conversion from char to int and then back to char
        }
        cout << endl;
    }

    return 0;
}