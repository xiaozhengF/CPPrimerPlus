#include <iostream>
#include <cstring>
using namespace std;
const int SIZE = 20;
const char FINISHED[] = "done";
int main(){

    cout << "Enter words (to stop, type the word done): \n";
    int count = 0;
    char words[SIZE];
    while(strcmp(FINISHED, words)!=0){
        count++;
        cin >> words;
        cin.get(); 
    }
    cout << "You entered a total of " << count-1 << " words.\n";
    return 0;
}