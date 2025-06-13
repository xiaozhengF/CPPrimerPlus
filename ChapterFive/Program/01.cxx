#include <iostream>
int main(){
    using namespace std;
    for(int i = 1; i<=64; i*=2) cout << i << " ";
    cout << endl;
    int x = (1,024);
    cout << "x = " << x << endl;
    return 0;
}