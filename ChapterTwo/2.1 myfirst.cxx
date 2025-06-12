#include <iostream>

int main(){
    using namespace std;
    cout << "Come up and C++ me some time.";
    cout << endl;
    cout << "You won't regret it!"<< endl;
    /*
    场景分析
如果用户在程序运行时直接按下回车键：

第一次 cin.get() 会读取这个回车符。
第二次 cin.get() 会等待用户再次按下回车键。
如果用户输入其他字符并按下回车：

第一次 cin.get() 会读取输入的第一个字符。
第二次 cin.get() 会读取回车符。
为什么需要两次？
在某些情况下（如之前使用了 cin >> 读取输入），输入缓冲区中可能已经存在换行符。如果只调用一次 cin.get()，它会直接读取缓冲区中的换行符，程序不会暂停。因此，调用两次 cin.get() 可以确保程序真正等待用户按下回车键。

总结
这两行代码的作用是：

确保清空输入缓冲区中的换行符。
暂停程序，等待用户按下回车键，防止程序立即退出，让用户有时间查看输出结果。
    */
    cin.get();
    cin.get();
    return 0;
}