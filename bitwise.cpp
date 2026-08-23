#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout << "Bitwise left shift of "<<a<<" and "<<b<<" is: "<<(a<<1)<<endl;
    cout << "Bitwise right shift of "<<a<<" and "<<b<<" is: "<<(a>>1)<<endl;
    return 0;
}