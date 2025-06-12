#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;
    char temp;
    for (int i = 0, j = word.size() - 1; i < j; i++, j--)
    {
        word[i] = word[i] + word[j];
        word[j] = word[i] - word[j];
        word[i] = word[i] - word[j];
        // Alternatively, you can use the swap function:
        // swap(word[i], word[j]);
        // Alternatively, you can swap characters without using the swap function:
        // word[i]=word[i]^word[j];
        // word[j] = word[i]^word[j];
        // word[i] = word[i]^word[j];
        // Alternatively, you can use the following lines to swap characters:
        // temp = word[i];
        // word[i] = word[j];
        // word[j] = temp;
    }
    cout << "Reversed word: " << word << endl;
    return 0;
}