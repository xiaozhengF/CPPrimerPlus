#include <iostream>
#include <fstream>
int main()
{
    using namespace std;
    char automobile[50];
    int year;
    double price;
    ofstream outFile;
    outFile.open("6_11carinfo.txt");
    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter price: ";
    cin >> price;
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Price: " << price << endl;
    outFile.close();
    return 0;
}