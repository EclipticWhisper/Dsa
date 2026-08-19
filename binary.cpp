#include <iostream>
using namespace std;

int binaryNum(int decNum)
{
    int ans = 0;
    int pow = 1;
    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}

int decimalNum(int binaryNum)
{
    int ans = 0;
    int pow = 1;
    while (binaryNum > 0)
    {
        int lastDigit = binaryNum % 10;
        binaryNum /= 10;
        ans += lastDigit * pow;
        pow *= 2;
    }
    return ans;
}

int main()
{
    int decNum;
    cout << "Enter a decimal number: ";
    cin >> decNum;

    int binaryRepresentation = binaryNum(decNum);
    cout << "Binary representation of " << decNum << " is: " << binaryRepresentation << endl;

    int decimalRepresentation = decimalNum(binaryRepresentation);
    cout << "Decimal representation of " << binaryRepresentation << " is: " << decimalRepresentation << endl;

    return 0;
}
