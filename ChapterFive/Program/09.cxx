#include <iostream>
#include <string>
using namespace std;
const string FINISHED = "done";
int main(){
    string words;
    int count = 0;
    cout << "Enter words (to stop, type the word done): \n";
    while(words != FINISHED){
        count++;
        cin >> words;
        cin.get(); // 读取换行符
    }
    cout << "You entered a total of " << count - 1 << " words.\n";
    return 0;
}