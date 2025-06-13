#include <iostream>
int main()
{
    using namespace std;
    int sum = 0;
    int num;
    while (num)
    {
        cout << "请输入数字：";
        cin >> num;
        sum += num;
        cout << "当前累计和为：" << sum << endl;
    }
    cout << "输入0，程序结束。" << endl;
    return 0;
}