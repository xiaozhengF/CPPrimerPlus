#include <iostream>
#include <cstring>
int main(){
    using namespace std;
    const int size=15;
    char name1[size];
    char name2[size] = "c++owboy";
    cout << "Howdy! I'm " << name2;
    cout << "! what's your name? \n";
    cin >> name1;
    wcout << "well,"<< name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof name1 << " bytes.\n";
    cout <<"Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';
    cout << "Here are the first 3 characters of my name:" << name2 << endl;
    return 0;

}