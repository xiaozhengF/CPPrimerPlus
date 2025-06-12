#include <iostream>
int main(){
    using namespace std;
    long long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    const int hourPerDay = 24;
    const int minPerHour = 60;
    const int secPerMin = 60;
    int days = seconds / (hourPerDay * minPerHour * secPerMin);
    int hours = (seconds % (hourPerDay * minPerHour * secPerMin)) / (minPerHour * secPerMin);
    int minutes = (seconds % (minPerHour * secPerMin)) / secPerMin;
    int second = seconds % secPerMin;
    cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, and " << second << " seconds." << endl;
    return 0;
}