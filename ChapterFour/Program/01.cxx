#include <iostream>
#include <vector>
#include <array>
#include <cstring>
int main(){
    using namespace std;
    char actor[30];
    array<char,30> actor;
    vector<char> actor(30);

    short betsie[100];
    array<short,100> betsie;
    vector<short> betsie(100);

    float chuck[13];
    array<float,13> chuck;
    vector<float> chuck(13);

    long double dipsea[64];
    array<long double,64> dipsea;
    vector<long double> dipsea(64);

    int positiveOdd[5] = {1, 3, 5, 7, 9};
    array<int,5> positiveOdd = {1, 3, 5, 7, 9};
    vector<int> positiveOdd = {1, 3, 5, 7, 9};

    int seven = positiveOdd[0] + positiveOdd[4];

    cout << chuck[1] << endl;

    const char *temp = "cheeseburger";
    char temp2[30] = "cheeseburger";

    string temp3 = "Waldorf Salad";

    struct fish{
        char name[30];
        int weight;
        double len;
    };
    fish fish1{
        "shayu",
        200,
        20.89
    };

    enum Response {No, Yes, Maybe};

    double red = 30.78;
    double *ptr = &red;
    cout << *ptr << endl;

    float treacle[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};
    float *ptr2 = treacle;
    cout << *ptr2 << endl;
    cout << *(ptr2+9) << endl;

    int size = 0;
    cout << "请输入一个正整数：";
    cin >> size;
    int * temp4 = new int[size];
    vector<int> temp5(size);

    cout << (int *) "Home of the jolly bytes";

    fish *fish2 = new fish{"shayu",200,20.89};
    cout << fish2->name << endl;
    cout << fish2->weight << endl;
    cout << fish2->len << endl;
    const int Ssize = 10;
    vector<string> VS(Ssize);
    array<string,Ssize> AS;
    return 0;
}