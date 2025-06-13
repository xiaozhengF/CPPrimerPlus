#include <iostream>
int main()
{
    using namespace std;
    unsigned int salesVolume[3][12] = {0};
    const char *months[12] = {
        "January", "February", "March", "April", "May",
        "June", "July", "August", "September", "October",
        "November", "December"};
    unsigned int totalSales = 0, yearlySales = 0;
    for (int year = 0; year < 3; year++)
    {
        yearlySales = 0;
        cout << "Enter sales volume for year " << (year + 1) << ":\n";
        for (int month = 0; month < 12; month++)
        {
            cout << "Enter sales volume for " << months[month] << ": ";
            cin >> salesVolume[year][month];
            yearlySales += salesVolume[year][month];
        }
        totalSales += yearlySales;
        cout << "Total sales volume for year " << (year + 1) << ": " << yearlySales << endl;
    }
    cout << "Total sales volume for the three years: " << totalSales << endl;
    return 0;
}