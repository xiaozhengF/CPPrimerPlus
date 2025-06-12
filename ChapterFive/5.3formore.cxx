#include <iostream>
#include <array>
/*
ArSize
开始：程序启动时
结束：程序结束时
作用域：从声明点到文件末尾
存储类型：

默认是静态存储期（static storage duration）
在程序的整个运行期间都存在
存储在程序的数据段（data segment）中
作用域：

文件作用域（file scope）
如果没有使用 extern 关键字，则仅在当前文件可见
*/
const int ArSize = 16; // 整个程序周期内存在、程序文件中所有的函数都可以使用它
int main(){
    using namespace std;
    // long long factorials[ArSize];
    array<long long,ArSize> factorials; // Corrected array declaration
    factorials[0] = 1LL;
    for(int i = 1;i < ArSize;i++){
        factorials[i] = i  * factorials[i-1];
    }
    for(int i = 0;i<ArSize;i++)
    {
        cout << i << "! = " << factorials[i] << endl;
    }
    return 0;
}