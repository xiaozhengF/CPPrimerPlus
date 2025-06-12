#include <iostream>
int main()
{
    using namespace std;
    int ch, ch1;
    int count = 0;
    ch = cin.get();
    while (ch != EOF)
    {
        cout.put(ch);
        ++count;
        ch = cin.get();
    }
    cout << endl << count << " characters read.\n";
    // 以上代码可以改写为以下形式：
    count = 0;
    while ((ch = cin.get()) != EOF)
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl << count << " characters read.\n";
    return 0;
}