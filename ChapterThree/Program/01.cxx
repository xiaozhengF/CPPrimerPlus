#include <iostream>
int main(){
    using namespace std;
    // cout.setf(ios_base::fixed, ios_base::floatfield); // 顶点表示法，默认小数点后6位
    float height;
    const int convert = 12; // 1英尺=12英寸
    cout << "请输入你的身高（英寸为单位）：______\b\b\b\b\b\b";
    cin >> height;
    int feet = int(height / convert); // 英尺
    float inch = height - feet * convert; // 英寸
    cout << "你的身高是" << feet << "英尺,"<< inch << "英寸" << endl; 
    return 0;
}