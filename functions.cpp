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

// prime numbers in a number(n)
// 1. This function returns 1 if prime, and 0 if not prime
int isPrime(int n)
{
    if (n <= 1) return 0; // 0 means False
    
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) return 0; // Found a factor, return 0
    }
    
    return 1; // 1 means True
}

int main()
{
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;
    cout << "The prime numbers are: " << endl;

    for (int i = 1; i <= limit; i++)
    {
        // 2. Check if the function returns 1 (True)
        if (isPrime(i) == 1) 
        {
            cout << i << " " << endl; 
        }
    }

    cout << endl; 
    return 0;
}
