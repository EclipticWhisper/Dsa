#include <iostream>
using namespace std;
int main()
{
    // Pattern for printing Characters:
    //  int n = 4;
    //  for (int i = 0; i < n; i++)
    //  {
    //      char ch = 'A';
    //      for (int j = 0; j < n; j++)
    //      {
    //          cout << " " << ch;
    //          ch = ch + 1; // implicit type conversion from char to int and then back to char
    //      }
    //      cout << endl;
    //  }

    // Pattern for printing numbers like 1 2 3 4 5 6 7 ....

    // int n = 4;
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << " " << num;
    //         num++;
    //     }
    //     cout << endl;
    // }

    // Pattern for printing triangle of stars:
    // int n = 4;
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << ch << " ";
    //     }
    //     ch = ch + 1; // implicit type conversion from char to int and then back to char
    //     cout << endl;
    // }

    // inverted triangle pattern
    // int n = 4;
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << ch;
    //     }
    //     ch++;
    //     cout << endl;
    // }

    // pyramid patterns
    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     // int num = 1;
    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         cout << j;
    //         // num++;
    //     }
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // hollow diamond pattern
    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     // 1. Corrected comparison operator (<)
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     // 2. Prints the stars
    //     if (i != 0)
    //     {
    //         for (int j = 0; j < 2 * i - 1; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }

    //     // 3. Added newline to separate rows
    //     cout << endl;
    // }

    return 0;
}