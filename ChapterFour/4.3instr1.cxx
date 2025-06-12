#include <iostream>
int main(){
    using namespace std;
    const int ArSize=20;
    char name[ArSize];
    char dessert[ArSize];
    cout << "Enter your name: \n";
    //注意这里cin只读取到空白（空格、制表符和换行符）来确定字符串的结束位置
    cin >> name;
    cout << "Enter your favourite dessert: \n";
    cin >> dessert;
    cout << "I have some delicious " << dessert << " for you, " << name << ".\n";
    return 0;
}