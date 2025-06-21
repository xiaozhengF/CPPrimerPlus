#include <iostream>
#include <cctype>
#include <string>
int main()
{
    using namespace std;
    cout << "Enter words (q to quit):\n";
    string word;
    int others = 0;
    int Vowels = 0;
    int Consonants = 0;
    while (cin >> word)
    {
        if (word == "q")
            break;
        if (isalpha(word[0]))
        {
            switch (word[0])
            {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                Vowels++;
                break;
            default:
                Consonants++;
                break;
            }
        }
        else
            others++;
    }
    cout << Vowels << " words beginning with vowerls\n";
    cout << Consonants << " words beginning with consonants\n";
    cout << others << " others";
    return 0;
}