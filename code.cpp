#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int multiplyNo = 1;

    // Changed condition from '<' to '<=' to include 10
    for (int i = 1; i <= n; i++) { 
        multiplyNo *= i;
    }

    cout << "Multiply: " << multiplyNo << endl;          // Outputs: 3628800
    cout << "Size of multiplyNo: " << sizeof(multiplyNo) << " bytes" << endl; // Outputs: 4 bytes
    
    return 0;
}
