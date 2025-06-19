#include <iostream>
const int Max = 5;
int main()
{
    using namespace std;
    double fish[Max];
    int afterWrongCin;
    cout << "Please enter the weights of your fish.\n";
    cout << "You may enter up to " << Max << " fish <q to terminate>.\n";
    cout << "fish #1: ";
    int i = 0;
    while (i < Max && cin >> fish[i])
    {
        if (++i < Max)
            cout << "fish #" << i + 1 << ": ";
    }
    /*
    当用户输入的不是数字时，将依次采取以下4个措施：
    要输入的值保持不变； 
    不匹配的输入将被留在输入队列中； 
    cin对象中的一个错误标记被设置； 
    对cin方法的调用将返回false（如果被转换为bool类型）。
    并且之后该程序将不再读取输入。要使能输入需：
    1.先重置cin错误标记，cin.clear()
    2.删除错误输入 while(cin.get()!='\n');

    */
    cout << "test if cin valid: ";
    cin >> afterWrongCin; 
    double total = 0.0;
    for (int j = 0; j < i; j++)
        total += fish[j];
    if (i == 0)
        cout << "No fish\n";
    else
        cout << total / i << " = average weight of "
             << i << " fish\n";
    cout << "Done.\n";

    return 0;
}