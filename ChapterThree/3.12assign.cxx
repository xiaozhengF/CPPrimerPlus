#include <iostream>
int main(){
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield); // 顶点表示法，默认小数点后6位
    float tree = 3;
    int guess(3.9832);
    //int debt = 7.2E12;
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    //cout << "debt = " << debt << endl;
    const int code = 66;
    int x = 66;
    //char c1 {31325};
    char c2 = {66};
    char c3 {code};
    //char c4 = {x};//会警告，因大括号初始化禁止隐式收缩
    x = 31325;
    char c5 = x;
    return 0;
}