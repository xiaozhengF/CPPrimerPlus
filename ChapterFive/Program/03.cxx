#include <iostream>
#include <array>
int main(){
    using namespace std;
    array<long double,100> factorials;
    factorials[0] = 1.0L;
    for (int i = 1;i < 100;i++){
        factorials[i] = i * factorials[i-1];
    }
    cout.setf(ios_base::fixed, ios_base::floatfield); // 设置为定点表示法
    cout << "100! = " << factorials[99] << endl;
    return 0;
}