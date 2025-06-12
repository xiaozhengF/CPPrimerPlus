#include <iostream>
#include <cstring>
/*
strcmp 按照以下规则逐字符比较两个字符串的 ASCII 值：

从两个字符串的第一个字符开始，逐字符比较它们的 ASCII 值。
如果某个位置的字符不同，返回它们的 ASCII 值差值（str1[i] - str2[i]），不一定是差值，取决于编译器或标准库实现
如果某个字符串先到达 \0（字符串结束符），则认为该字符串小于另一个字符串。
如果两个字符串完全相同，返回 0。
返回值：
负值：如果第一个字符串小于第二个字符串。
0：如果两个字符串相等。
正值：如果第一个字符串大于第二个字符串。
*/
int main(){
    using namespace std;
    cout << strcmp("Zoo","aviary") << endl; 
    cout << strcmp("aviary","Zoo") << endl; 
    char word[5] = "?ate";
    for(char ch = 'a';strcmp(word,"mate");ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}