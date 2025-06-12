#include <iostream>
/*
float 类型（tub 和 million）：
精度较低（6到7位有效数字）。
表示10.0/3.0时引入舍入误差，例如3.3333333而不是3.333333333…。
在乘以大数，误差被放大，例如（如 3333333.250000 和 33333332.538605）。
double 类型（mint）：
精度较高（15到16位有效数字）。
表示10.0/3.0时更接近真实值，（如3.3333333333333335）。
即使乘以大数，误差依然很小，结果接近理论值（如 3333333.333333）。
类型提升的影响：
在 10.0 * million * tub 中，10.0被存储为double类型，尽管计算提升为 double，但 tub 的初始误差已经存在，无法通过提升消除。
在 million * mint 中，mint 的高精度保证了结果的准确性。
*/
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield); // 顶点表示法，默认小数点后6位
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;
    cout << "tub=" << tub;
    cout << ",a million tubs=" << million * tub;
    cout << ",\nand a ten million tubs=" << 10.0 * million * tub << endl;//乘以1000000，float舍入误差被放大
    cout << "mint=" << mint;
    cout << ",a million mints=" << million * mint << endl;
    cout << ",\nand a ten million tubs=" << 10.0 * million * mint << endl;
    return 0;
}