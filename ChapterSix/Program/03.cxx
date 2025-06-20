#include <iostream>
#include <array>
int main()
{
    using namespace std;
    array<double, 10> donations = {0.0};
    double donation, sum;
    int i;
    /*
    注意这里一旦cin >> donation 类型不匹配，将返回false，并且后续cin操作将被禁止，需clear（）并清空输入缓冲区
    */
    for (i = 0; i < 10 && cin >> donation; i++)
    {
        donations[i] = donation;
        sum += donation;
    }
    double ave = sum / i;
    int gCount = 0;
    for (double &x : donations)
    {
        if (x > ave)
            gCount++;
    }
    cout << "the average donation is " << ave << ", there are " << gCount << " donations greater average donation.\n";
    cout << "Bye.\n";
    return 0;
}