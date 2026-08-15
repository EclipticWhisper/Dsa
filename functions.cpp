#include <iostream>
using namespace std;

// int sumOfN(int n)
// {

//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     return sum;
// }

int sumOfDigits(int n)
{
    int digitSum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        n /= 10;
        digitSum += lastDigit;
    }
    return digitSum;
}

int main()
{

    cout << sumOfDigits(15) << endl;
    return 0;
}