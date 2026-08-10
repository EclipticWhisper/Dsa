#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int count = 0;
    int i = 1;
    while (i <= n)
    {
        count += i;
        i++;
        // cout << count << endl;
    }

    cout << count << endl;
}