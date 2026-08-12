#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int multiplyNo = 1;
    int i = 1;
    while (i <= n)
    {

        multiplyNo *= i;
        i++;
    }
    cout << "Multiply by 3: " << multiplyNo << endl;
    cout << "Size of multiplyNo: " << sizeof(multiplyNo) << endl;
}