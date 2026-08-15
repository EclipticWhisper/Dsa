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

// finding bionomial coefficient nCr
//  int factorial(int n)
//  {
//      int fact = 1;
//      for (int i = 1; i <= n; i++)
//      {
//          fact *= i;
//      }
//      return fact;
//  }

// int nCr(int n, int r)
// {
//     int factN = factorial(n);
//     int factR = factorial(r);
//     int factNR = factorial(n - r);

//     return factN / (factR * factNR);
// }

// prime or not
#include <iostream>
using namespace std;

int isPrime(int n)
{
    // Numbers less than or equal to 1 are not prime
    if (n <= 1)
        return 0;

    // Check numbers from 2 up to n-1
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // Found a factor! It's definitely NOT prime. Exit immediately.
            return 0;
        }
    }

    // Checked all numbers and found no factors. It IS prime!
    return 1;
}

int main()
{
    if (isPrime(5) == 1)
    {
        cout << "5 is a Prime Number" << endl;
    }
    else
    {
        cout << "5 is Not a Prime Number" << endl;
    }
    return 0;
}
