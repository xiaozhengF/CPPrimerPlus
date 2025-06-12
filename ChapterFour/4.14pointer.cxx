#include <iostream>
int main(){
    using namespace std;
    int updates = 6;
    int *p_updates;
    p_updates = &updates; 
    cout << "Values:updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    cout << "Addresses:&updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    *p_updates = *p_updates + 1; // Increment the value pointed to by p_updates
    cout << "Now updates = " << updates << endl;
    return 0;
}