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

// //Sum of digits of a number
// int sumOfDigits(int n)
// {
//     int digitSum = 0;
//     while (n > 0)
//     {
//         int lastDigit = n % 10;
//         n /= 10;
//         digitSum += lastDigit;
//     }
//     return digitSum;
// }

//finding bionomial coefficient nCr
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int factN = factorial(n);
    int factR = factorial(r);
    int factNR = factorial(n - r);

    return factN / (factR * factNR);
}

int main()
{
    int n = 8, r = 2;

    cout << nCr(n, r) << endl;
    return 0;
}