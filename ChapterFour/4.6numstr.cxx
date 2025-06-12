#include <iostream>
int main(){
    using namespace std;
    cout << "what year was your house built?\n";
    int year;
    // 利用表达式cin>>year返回cin对象，将调用拼接起来
    (cin >> year).get();
    cout << "what is its street address?\n";
    char address[80];
    cin.getline(address,80);
    cout << "Year built: " << year << "\n";
    cout << "Street Address: " << address << "\n";
    cout << "Done!\n";
    return 0;
}