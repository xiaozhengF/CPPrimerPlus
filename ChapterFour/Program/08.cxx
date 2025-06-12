#include <iostream>
#include <string>
struct pizza{
    std::string company;
    unsigned int diameter;
    unsigned int weight;
};
int main(){
    using namespace std;
    pizza *p2 = new pizza;
    cout << "Enter the name of the pizza company: ";
    getline(cin,p2->company);
    cout << "Enter the diameter of the pizza in inches: ";
    cin >> p2->diameter;
    cout << "Enter the weight of the pizza in grams: ";
    cin >> p2->weight;
    cout << "Company: " << p2->company << endl;
    cout << "Diameter: " << p2->diameter << " inches" << endl;
    cout << "Weight: " << p2->weight << " grams" << endl;
    cout << "Thank you for providing the pizza details!" << endl;
    return 0;
}