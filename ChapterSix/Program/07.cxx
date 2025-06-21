#include <iostream>
#include <string>
using namespace std;
struct Patron
{
    string full_name;
    double amount;
};
int main()
{
    int patron_numbers;
    cout << "please enter the number of patrons: ";
    (cin >> patron_numbers).get();
    Patron *ppatron;
    ppatron = new Patron[patron_numbers];
    for (int i = 0; i < patron_numbers; i++)
    {
        cout << "Please enter the full name of the " << (i + 1) << "-th patron: ";
        getline(cin, ppatron[i].full_name);
        cout << "Please enter donation amount of the " << (i + 1) << "-th patron: ";
        (cin >> ppatron[i].amount).get();
    }
    cout << "Grand Patrons:\n";
    bool empty = true;
    for (int i = 0; i < patron_numbers; i++)
    {
        if (ppatron[i].amount > 10000)
        {
            empty = false;
            cout << "full name: " << ppatron[i].full_name << endl;
            cout << "donation amount: " << ppatron[i].amount << endl;
        }
    }
    if (empty)
        cout << "None.\n"
             << endl;
    empty = true;
    cout << "Patrons:\n";
    for (int i = 0; i < patron_numbers; i++)
    {
        if (ppatron[i].amount <= 10000)
        {
            empty = false;
            cout << "full name: " << ppatron[i].full_name << endl;
            cout << "donation amount: " << ppatron[i].amount << endl;
        }
    }
    if (empty)
        cout << "None.\n"
             << endl;
    delete[] ppatron;

    return 0;
}