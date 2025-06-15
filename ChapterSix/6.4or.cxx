#include <iostream>
/*
什么是顺序点（Sequence Point）
在 C++ 中，顺序点是程序执行中的一个特定位置，保证在该点之前的所有副作用（如变量赋值、递增等）都已经完成，并且不会与该点之后的操作发生冲突。顺序点的概念确保程序的行为是确定的，而不是依赖于编译器的实现。

为什么顺序点重要？
如果在一个表达式中对同一个变量进行多次修改（如 x++ 和 ++x），而没有明确的顺序点，可能会导致未定义行为。顺序点的存在可以避免这种问题。

为什么冒号、逗号和 || 是顺序点？
1. 冒号（:）
冒号在三元运算符（?:）中是一个顺序点。
在三元运算符中，条件表达式的计算会在冒号之前完成，然后根据条件选择执行 true 或 false 分支。
示例：
int x = 5;
int y = (x > 3) ? x++ : ++x;
在 x > 3 的计算完成后，才会执行 x++ 或 ++x，确保没有冲突。
2. 逗号（,）
逗号运算符是一个顺序点。
在逗号运算符中，左侧表达式的所有副作用都会在逗号之前完成，然后才会执行右侧表达式。
示例：
int x = 5;
int y = (x++, ++x);
x++ 的副作用（x 增加到 6）会在逗号之前完成，然后执行 ++x（x 增加到 7）。
3. 逻辑或（||）
|| 是一个顺序点，因为它具有短路求值的特性。
如果左侧表达式为 true，右侧表达式不会被计算，确保左侧的副作用已经完成。
示例：
int x = 0;
bool result = (x++ > 0) || (++x > 0);
如果 x++ > 0 为 true，右侧的 ++x 不会执行，确保左侧的副作用完成。
总结
顺序点的作用是确保程序的行为是确定的，避免未定义行为。
*/
int main(){
    using namespace std;
    cout << "This program may reformat your hard disk\n"
        "and destroy all your data.\n"
        "Do you wish to continue? <y/n> ";
    char ch;
    cin >> ch;
    if(ch == 'y' || ch == 'Y')
        cout << "You were warned!\a\a\n";
    else if (ch == 'n' || ch == 'N')
        cout << "A wise choice ... bye.\n";
    else
        cout << "That wasn't a y or n! Apparently you "
        "can't follow \ninstructions, so "
        "I'll trash your disk anyway.\a\a\a\n";
    return 0;
}