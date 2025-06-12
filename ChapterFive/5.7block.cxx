#include <iostream>
int main(){
    using namespace std;
    int x = 20;
    {
        int y = 100;
        cout << x << endl; // Accessing x from the outer scope
        cout << y << endl; // Accessing y from the inner scope
    }
    cout << x << endl; // Accessing x from the outer scope again
    // cout << y << endl; // This line would cause an error because y is not accessible here
    int m = 10;
    {
        cout << m << endl; // Accessing m from the outer scope
        int m = 50; // This m shadows the outer m
        cout << m << endl; // Accessing the inner m
    }
    cout << m << endl; // Accessing the outer m again
    return 0;
}