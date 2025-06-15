#include <iostream>
int main()
{
    using namespace std;
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (j < rows - i - 1)
                cout << ".\t";
            else
                cout << "*\t";
        }
        cout << endl;
    }
    return 0;
}