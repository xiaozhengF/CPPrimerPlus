#include <iostream>
#include <cstring>
int main(){
    using namespace std;
    char firstName[20];
    char lastName[20];
    char fullName[40];
    cout << "Enter first name and last name: ";
    cin >> firstName >> lastName;
    strcpy(fullName, firstName);
    strcat(fullName, ", ");
    strcat(fullName, lastName);
    cout << "Full name: " << fullName << endl;
    return 0;
}