#include <iostream>
int main(){
    using namespace std;
    int min,minTemp,max;
    cout << "Enter the minimum value: ";
    cin >> min;
    minTemp = min;
    cout << "Enter the maximum value: ";
    cin >> max;
    int sum = 0;
    while(min<=max){
        sum+=min++;
    }
    cout << "The sum of integers from " << minTemp << " to " << max << " is: " << sum << endl;
    return 0;
}