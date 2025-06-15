#include <iostream>
int main(){
    using namespace std;
    cout << "Type, and I shall repeat.\n";
    char ch;
    while((ch = cin.get())!='.'){
        if(ch == '\n')
            cout << ch;
        else
            cout << ++ch;
    }
    return 0;
}