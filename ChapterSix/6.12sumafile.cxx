#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;
int main()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;
    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Cound not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;

    // inFile >> value;
    // while (inFile.good())
    // {
    //     cout << value;
    //     ++count;
    //     sum += value;
    //     inFile >> value;
    // }
    while (inFile >> value)
    {
        cout << value << "\t";
        ++count;
        sum += value;
    }
    cout << endl;
    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "Input terminated by data mismatch.\n";
    if (count == 0)
        cout << "No data processed.\n";
    else
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    inFile.close();
    /*
    1. 运算时的类型转换规则
    在 C++ 中，如果一个有符号整数（如 int）和一个无符号整数（如 unsigned int）进行运算，有符号数会被转换为无符号数，然后再进行计算。这是因为无符号类型的“级别”更高。

    2. 具体转换过程
    a 的值是 -1，类型为 int。
    b 的值是 2，类型为 unsigned int。
    计算 a + b 时，a 会被转换为 unsigned int 类型。
    在 32 位系统下，unsigned int 的取值范围是 0 ~ 4294967295。
    -1 转换为 unsigned int，会变成 4294967295（即 2^32 - 1）。
    所以，c = 4294967295 + 2 = 4294967297，但由于 c 也是 unsigned int，结果会对 2^32 取模，得到 1。
    实际上，auto c = a + b; 的类型是 unsigned int，结果是 1。

    3. 总结
    有符号和无符号类型混合运算时，有符号数会转换为无符号数。
    负数转换为无符号数时，会加上一个模（如 2^32），变成很大的正数。
    这种转换可能导致意料之外的结果，实际开发中应尽量避免有符号和无符号类型混用。
    */
    int a = -1;
    unsigned int b = 2;
    auto c = a + b; // a 转换为 unsigned int，结果会很大（因为 -1 变成了 4294967295）
    cout << "c: " << c << endl;
    return 0;
}