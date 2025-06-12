#include <iostream>
int main(){
    using namespace std;
    const int Lbs_per_stn=14;
    int lbs;
    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone  = lbs/Lbs_per_stn; // 整数除法
    int pounds = lbs%Lbs_per_stn; // 取余
    cout << lbs << " pounds are " << stone << " stone, " << pounds << " pounds.\n";
    return 0;
}