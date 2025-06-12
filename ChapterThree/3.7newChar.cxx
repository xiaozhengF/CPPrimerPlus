#include <iostream>
int main(){
    using namespace std;
    wchar_t wch = L'X'; // wide character
    wchar_t wstr[] = L"Hello, World!"; // wide string
    wcout << L"Wide character: " << wch << endl;
    wcout << L"Wide string: " << wstr << endl;
    char16_t ch1 = u'汉'; // UTF-16 character
    char32_t ch2 = U'\U0000222B'; // UTF-32 character
    char32_t ch3 = U'\u2155';
    cout << "char16_t: " << ch1 << endl;
    cout << "char32_t: " << ch2 << endl;
    cout << "char32_t: " << ch3 << endl;
    cout << "sizeof(wchar_t): " << sizeof(wchar_t) << endl;
    cout << "sizeof(char16_t): " << sizeof(char16_t) << endl;
    cout << "sizeof(char32_t): " << sizeof(char32_t) << endl;
    return 0;
}