#include <iostream>
int main(){
    using namespace std;
    char ch,ch1;
    int count = 0;
    cin.get(ch);
    /*
    cin.fail()

    的作用是检查输入流是否处于失败状态。它返回一个布尔值，用于判断输入操作是否成功。

    详细解释
    cin.fail() 的返回值：

    返回 true：表示输入流发生错误，输入操作失败。
    返回 false：表示输入流正常，输入操作成功。
    常见的失败情况：

    输入的内容与预期类型不匹配（例如，期望输入数字但用户输入了字母）。
    输入流到达文件结束符（EOF）。
    输入流被其他错误状态标记（如硬件错误）。
    */
    while(cin.fail() == false) 
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }
    // 以上代码可以改写为以下形式：
    count = 0;
    while(cin.get(ch1))
    {
        cout.put(ch1);
        ++count;
    }
    cout << endl << count << " characters read\n";
    return 0;
}