#include <iostream>
int main(){
    using namespace std;
    int higgens = 5;
    int *pt = &higgens;
    cout << "Value of higgens = " << higgens
    << ";Address of higgens = " << &higgens << endl;

    cout << "Value of *pt = " << *pt
    << ";Value pf pt = " << pt << endl;
    int *pt2;
    pt2 = (int *)0XB8000000; //必须加int *。要将数字值作为地址来使用，应通过强制类型转换将数字转换为适当的地址类型：
    return 0;
}