#include <iostream>
int main(){
    using namespace std;
    int spaces = 0;
    int total = 0;
    char ch;
    while((ch = cin.get())!='.'){
        if(ch == ' ') spaces++;
        total++;
    }
    cout << "There are " << spaces << " spaces and " << total << " characters.\n";
    return 0;
}