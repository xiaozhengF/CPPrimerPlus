#include <iostream>
#include <cstring>
using namespace std;
char * getname(void); // 函数原型声明
int main(){
    char * name; // 指向字符的指针
    name = getname(); // 调用函数获取动态分配的内存
    cout << name << " at " << (int *)name << endl; // 输出指针和地址
    delete [] name; // 释放动态分配的内存
    name = getname(); // 再次调用函数获取新的动态分配的内存
    cout << name << " at " << (int *)name << endl; // 输出新的指针和地址
    delete [] name; // 释放新的动态分配的内存
    return 0;
}
char * getname(void) {
    char temp[80]; // 临时数组
    cout << "Enter last name: ";
    cin.get(temp, 80); // 从输入中读取字符串
    cin.get(); // 清除输入缓冲区中的换行符
    char * pn = new char[strlen(temp) + 1]; // 动态分配内存
    strcpy(pn, temp); // 复制字符串到动态分配的内存
    return pn; // 返回指向动态分配内存的指针
}