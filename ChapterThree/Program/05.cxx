#include <iostream>
#include <array>
int main(){
    using namespace std;
    const char *months[12] = {
        "January", "February", "March", "April", "May", 
        "June", "July", "August", "September", "October", 
        "November", "December"
    };
    array<unsigned int,12> salesVolume = {0};
    unsigned int totalSales = 0;
    for(int i = 0; i < 12; i++) {
        cout << "Enter sales volume for " << months[i] << ": ";
        cin >> salesVolume[i];
        totalSales += salesVolume[i];
    }
    cout << "Total sales volume for the year: " << totalSales << endl;
    return 0;
}