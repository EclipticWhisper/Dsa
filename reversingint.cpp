#include <iostream>
using namespace std;

int reverseInt(int n)
{
    int reversedNum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        n = n / 10;
    }
    return reversedNum;
}

int main()
{
    cout << reverseInt(125) << endl;
    return 0;
}