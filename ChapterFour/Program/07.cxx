#include <iostream>
#include <string>
struct pizza{
    std::string company;
    unsigned int diameter;
    unsigned int weight;
};
int main(){
    using namespace std;
    pizza p1;
    cout << "Enter the name of the pizza company: ";
    getline(cin,p1.company);
    cout << "Enter the diameter of the pizza in inches: ";
    cin >> p1.diameter;
    cout << "Enter the weight of the pizza in grams: ";
    cin >> p1.weight;
    cout << "Company: " << p1.company << endl;
    cout << "Diameter: " << p1.diameter << " inches" << endl;
    cout << "Weight: " << p1.weight << " grams" << endl;
    cout << "Thank you for providing the pizza details!" << endl;
    return 0;
}