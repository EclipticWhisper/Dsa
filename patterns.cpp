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
    int n = 4;
    int num = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << " " << num;
            num++;
        }
        cout << endl;
    }

    return 0;
}