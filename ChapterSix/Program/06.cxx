#include <iostream>
int main()
{
    using namespace std;
    int wages;
    int taxes = 0;
    while (true)
    {
        cout << "Please input your wages: ";
        cin >> wages;
        if(wages < 0 || cin.fail()) break;
        if (wages <= 5000)
            taxes = 0;
        else if (wages <= 15000)
            taxes = taxes + (wages - 5000) * 0.1;
        else if (wages <= 35000)
            taxes = taxes + 1000 + (wages - 15000) * 0.15;
        else
            taxes = taxes + 1000 + 3000 + (wages - 35000) * 0.2;
        cout << "your taxes is: " << taxes << endl;
    }
    return 0;
}