#include <iostream>
int main(){
    using namespace std;
    cout << "Enter a latitude in degrees, minutes, and seconds: ";
    int degrees, minutes, seconds;
    cin >> degrees >> minutes >> seconds;
    const int minConvert = 60;
    const int secConvert = 3600;
    double result = degrees + double(minutes)/minConvert + double(seconds)/secConvert;
    cout << degrees << " degrees, " << minutes << " minutes, and " << seconds << " seconds is " << result << " degrees." << endl;
    return 0;
}