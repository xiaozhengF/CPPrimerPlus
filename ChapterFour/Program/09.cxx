#include <iostream>
struct CandyBar
{
    char brand[20];
    double weight;
    unsigned int calories;
};
int main()
{
    using namespace std;
    CandyBar * CandyPtr = new CandyBar[3]{ {"Mocha Munch", 2.3, 350},
                                            {"Choco Delight", 1.5, 250},
                                            {"Nutty Crunch", 2.0, 300} };
    for (int i = 0; i < 3; ++i)
    {
        cout << "Brand: " << CandyPtr[i].brand << endl;
        cout << "Weight: " << CandyPtr[i].weight << " ounces" << endl;
        cout << "Calories: " << CandyPtr[i].calories << " calories" << endl;
        cout << "------------------------" << endl;
    }
    CandyBar candyArr[3] = {
        {"Mocha Munch", 2.3, 350},
        {"Choco Delight", 1.5, 250},
        {"Nutty Crunch", 2.0, 300}};
    for (int i = 0; i < 3; ++i)
    {
        cout << "Brand: " << candyArr[i].brand << endl;
        cout << "Weight: " << candyArr[i].weight << " ounces" << endl;
        cout << "Calories: " << candyArr[i].calories << " calories" << endl;
        cout << "------------------------" << endl;
    }
    return 0;
}