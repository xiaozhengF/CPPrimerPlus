#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
struct Patron
{
    string full_name;
    double amount;
};
int main()
{
    int patron_number = 0;
    fstream fin;
    fin.open("PatronInfo.txt");
    if (!fin.is_open())
    {
        cout << "Cound not open the file." << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    (fin >> patron_number).get();
    Patron *ppatron = new Patron[patron_number];
    for (int i = 0; !fin.eof() && i < patron_number; i++)
    {
        getline(fin, ppatron[i].full_name);
        (fin >> ppatron[i].amount).get();
    }
    cout << "Grand Patrons:\n";
    bool empty = true;
    for (int i = 0; i < patron_number; i++)
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
    for (int i = 0; i < patron_number; i++)
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
    fin.close();
    return 0;
}