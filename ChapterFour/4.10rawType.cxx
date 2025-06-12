#include <iostream>
int main(){
    using namespace std;
    cout << "Jim \"King\" Tutt uses \"\\n\" instead of endl." << '\n';
    cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << '\n';
    /*
        如果要在原始字符串中包含"(以及)"时，原始字符串语法允许您
        在表示字符串开头的"和(之间添加其他字符，这意味着表示字符串结尾
        的"和)之间也必须包含这些字符。
        例如，R"+*(abc)+*"是一个有效的原始字符串字面值。
        但是，R"foo(abc)bar"不是有效的原始字符串字面值，因为它在表示
        字符串开头的"和(之间包含了foo，而在表示字符串结尾的"和)
        之间包含了bar。
    */
    cout << R"+*("(Who wouldn't?)",she whispered.)+*" << endl;
    return 0;
}