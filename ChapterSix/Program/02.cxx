#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    char ch;
    while ((ch = cin.get()) != '@')
    {
        if (isdigit(ch))
            continue;
        else if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);
        cout << ch;
    }
    cout << "\nBye." << endl;
    return 0;
}