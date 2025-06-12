#include <iostream>
#include <string>
int main(){
    using namespace std;
    //const int ArSize=20;
    string name;
    string dessert;
    // char name[ArSize];
    // char dessert[ArSize];
    cout << "Enter your name: \n";
    //读取最多ArSize-1个字符，直到遇到换行符为止，并将其存储在name数组中，并且不保存换行符在输入缓冲区
    // cin.getline(name,ArSize);
    getline(cin, name);
    cout << "Enter your favourite dessert: \n";
    // cin.getline(dessert,ArSize);
    getline(cin, dessert);
    cout << "I have some delicious " << dessert << " for you, " << name << ".\n";
    return 0;
}