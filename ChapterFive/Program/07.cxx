#include <iostream>
#include <string>
struct car
{
    std::string carProducer;
    unsigned int carYear;
};
int main()
{
    using namespace std;
    cout << "How many cars do you wish to catalog? ";
    unsigned int carSize;
    (cin >> carSize).get();
    car *carArr = new car[carSize];
    for (int i = 0; i < carSize; i++)
    {
        cout << "Car #" << (i + 1) << ":\n";
        cout << "Please enter the make: ";
        getline(cin, carArr[i].carProducer);
        cout << "Please enter the year made: ";
        (cin >> carArr[i].carYear).get();
    }
    cout << "Here is your collection: \n";
    for (int i = 0; i < carSize; i++){
        cout << carArr[i].carYear << " " << carArr[i].carProducer << endl;
    }
    return 0;
}