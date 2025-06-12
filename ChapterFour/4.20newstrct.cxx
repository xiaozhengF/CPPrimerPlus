#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
    inflatable *ps = new inflatable;
    cout << "Enter name of inflatable item: ";
    /*
    如果输入的 name 大于 19 个字符：

    cin.get(ps->name, 20); 只会读取前 19 个字符（第 20 个位置留给字符串结束符 \0），多余的字符会留在输入缓冲区（包括回车符）。
    由于缓冲区还有剩余内容，后续的 cin >> (*ps).volume; 会直接读取剩下的内容（比如输入的第 20 个字符及之后的内容），导致 volume 读取到的不是你期望的数字，而是字符串的一部分，程序行为异常。
    如果输入的 name 小于等于 19 个字符（第 20 个位置是 \0）：

    cin.get(ps->name, 20); 会把你输入的内容全部读入 ps->name，并在末尾自动加上 \0。
    回车符会留在输入缓冲区，但由于 cin >> 会自动跳过空白字符（包括回车），后续输入 volume 和 price 时不会有问题，程序能正常运行。
    总结：

    输入大于 19 个字符时，后续输入会错乱，volume 读取异常。
    输入小于等于 19 个字符时，程序正常。
    */
    cin.get(ps->name, 20);
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << " cubic feet\n";
    cout << "Price: $" << ps->price << endl;
    delete ps; // 释放动态分配的内存
    return 0;
}