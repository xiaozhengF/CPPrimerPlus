#include <iostream>
struct CandyBar {
    char brand[20];
    double weight;
    unsigned int calories;
};
int main(){
    using namespace std;
    CandyBar snack{
        "Mocha Munch", 2.3, 350
    };
    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << " ounces" << endl;
    cout << "Calories: " << snack.calories << " calories" << endl;
    return 0;
}