#include <iostream>
#include <string>
int main(){
    using namespace std;
    string firstName;
    string lastName;
    string fullName;
    cout << "Enter first name: ";
    getline(cin, firstName);
    cout << "Enter last name: ";
    getline(cin, lastName);
    fullName = firstName + ", " + lastName;
    cout << "Full name: " << fullName << endl;
    return 0;
}