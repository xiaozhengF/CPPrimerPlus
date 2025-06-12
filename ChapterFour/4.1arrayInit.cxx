#include <cstdio>
#include <iostream>
int main(){
    using namespace std;
    int cards[4] = {1,2,3,4};
    int hands[4];
    // hands[4] = {1,3,4,5};
    // hands = cards;
    //c++11可以省略等号
    double earnings[4]{1.2e4, 1.5e4, 1.8e4, 2.0e4};
    //不加任何东西，c++11会自动初始化为0
    unsigned int counts[10]{};
    float balances[10] = {};
    // error: narrowing conversion
    // long plifs[]={25,92,3.0};
    // char slifs[4]{'h','i',1122011,'\0'};
    char tlifs[4]{'h','i',112,'\0'};
    cout<< "i fine thank" "you!\n";
    cout<< "i fine thank you!\n";
    cout << "i fine thank" 
        "you!\n";
}