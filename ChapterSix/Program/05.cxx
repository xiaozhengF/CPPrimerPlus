#include <iostream>
using namespace std;
const int strSize = 20;
struct bop
{
    char fullname[strSize];
    char title[strSize];
    char bopname[strSize];
    int preference;
};
void showmenu();
int main()
{
    showmenu();
    bop bops[5] = {
        {"Wimp Macho", "dancer", "WM", 0},
        {"Raki Rhodes", "Junior Programmer", "RR", 1},
        {"Celia Laiter", "driver", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "HH", 1},
        {"Pat Hand", "teacher", "LOOPY", 2}};
    char ch;
    cout << "Enter your choice: ";
    cin >> ch;
    while (ch != 'q')
    {
        switch (ch)
        {
        case 'a':
            for (bop &x : bops)
                cout << x.fullname << endl;
            break;
        case 'b':
            for (bop &x : bops)
                cout << x.title << endl;
            break;
        case 'c':
            for (bop &x : bops)
                cout << x.bopname << endl;
            break;
        case 'd':
            for (bop &x : bops)
            {
                switch (x.preference)
                {
                case 0:
                    cout << x.fullname << endl;
                    break;
                case 1:
                    cout << x.title << endl;
                    break;
                case 2:
                    cout << x.bopname << endl;
                    break;
                default:
                    break;
                }
            }
            break;
        default:
            break;
        }
        cout << "Next choice: ";
        cin >> ch;
    }
    cout << "Bye.\n";
    return 0;
}
void showmenu()
{
    cout << "Benevolent Order of Programmers Report\n";
    cout << "a. display by name\tb. display by title\n";
    cout << "c. display by bopname\td. display by preference\n";
    cout << "q. quit\n";
}