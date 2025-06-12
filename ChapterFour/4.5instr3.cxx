#include <iostream>
int main(){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    cout << "Enter your name: \n";
    cin.get(name,ArSize).get(); // The second .get() consumes the newline character left in the input buffer.
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert,ArSize).get(); // The second .get() consumes the newline character left in the input buffer.
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}