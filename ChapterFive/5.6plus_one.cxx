#include <iostream>
int main(){
    using namespace std;
    int a  = 20;
    int b = 20;
    cout << "a  = " << a << ": b = " << b << "\n";
    cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
    cout << "a  = " << a << ":  b = " << b << "\n"; 
    int x = 9;
    x = 2 * x++ * (3 - ++x);
    cout << "x = 2 * x++ * (3 - ++x) = " << x << "\n";
    return 0;
}