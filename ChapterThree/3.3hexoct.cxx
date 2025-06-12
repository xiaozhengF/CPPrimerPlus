#include <iostream>
int main(){
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    cout << "Monsieur cuts a striking figure!\n";
    // cout << "chest = " << chest << " (43 in decimal)\n";
    // cout << "waist = " << waist << " (42 in hexadecimal)\n";
    // cout << "inseam = " << inseam << " (34 in octal)\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << hex << "waist = " << waist << " (42 in hexadecimal)\n";
    cout << oct << "inseam = " << inseam << " (42 in octal)\n";
    cout << '\a'; // alert
    return 0;
}