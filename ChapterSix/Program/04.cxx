#include <iostream>
using namespace std;
void showmenu();
int main()
{
    showmenu();
    char choice;
    cin >> choice;
    while (!(choice == 'c' || choice == 'p' || choice == 't' || choice == 'g'))
    {
        cout << "Please enter a c, p, t, or g: ";
        cin >> choice;
    }
    switch (choice)
    {
    case 'c':
        cout << "A maple is a carnivore.\n";
        break;
    case 'p':
        cout << "A maple is a pianist.\n";
        break;
    case 't':
        cout << "A maple is a tree.\n";
        break;
    case 'g':
        cout << "A maple is a game.\n";
        break;
    }
    return 0;
}
void showmenu()
{
    cout << "Please enter one of the following choices:\n";
    cout << "c) carnivore\tp) pianist\n";
    cout << "t) tree\t\tg) game\n";
}