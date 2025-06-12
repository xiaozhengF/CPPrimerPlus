#include <iostream>
int main(){
    using namespace std;
    // 数组名表示数组首元素的地址，且不可修改 stacks == &stacks[0]
    double wages[3] = {10000.0,20000.0,30000.0};
    short stacks[3] = {3,2,1};
    double * pw  = wages;
    short * ps = &stacks[0];
    cout << "pw = " << pw << ",*pw = " << *pw << endl; // 10000.0
    pw = pw + 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ",*pw = " << *pw << "\n\n"; // 20000.0
    cout << "ps = " << ps << ",*ps = " << *ps << endl; //3
    ps = ps + 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ",*ps = " << *ps << "\n\n";//2
    cout << "Access two elements with array notation:\n";
    cout << "stacks[0] =" << stacks[0] 
         << ",stacks[1] = " << stacks[1] << endl;
    cout << "Access two elements with pointer notation:\n";
    cout << "*stacks = " << *stacks 
         << ",*(stacks + 1) = " << *(stacks + 1) << endl; //3 2
    cout << sizeof(wages) << " = size of wages array.\n"; //24
    cout << sizeof(pw) << " = size of pw pointer.\n"; //8

     cout << stacks << endl; //stacks首元素地址
     cout << &stacks[0] << endl; //stacks首元素地址
     cout << &stacks << endl;
     cout << sizeof(stacks) << " = size of stacks array.\n"; //6

     cout << stacks + 1 << endl; //stacks首元素地址+2
     cout << &stacks[0] + 1 << endl; // stacks首元素地址+2
     cout << &stacks + 1 << endl; //stacks首元素地址+6,这里stack是一个数组名，&stacks是一个指向包含3个short元素的数组的指针
     short (*ps2)[3] = &stacks; //ps2是一个指向包含3个short元素的数组的指针
     cout << ps2 << endl;
     cout << ps2 + 1 << endl; //ps2指向的数组首元素地址+6
     cout << *ps2 << endl; //ps2指向的数组首元素地址
     cout << *ps2 + 1 << endl; //ps2指向的数组首元素地址+2
    return 0;
}