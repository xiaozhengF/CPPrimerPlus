#include <iostream>
int main(){
    using namespace std;
    double feet,inch;
    double weight;
    cout << "请输入你的身高：";
    cin >> feet >> inch;
    // cout << endl;
    cout << "请输入你的体重：";
    cin >> weight;
    double height = (feet * 12 + inch)*0.0254;
    double weight_kg = weight / 2.2;
    double BMI = weight_kg / (height * height);
    cout << "你的BMI指数是：" << BMI << endl;
    if (BMI < 18.5)
        cout << "你过轻了！" << endl;
    else if (BMI < 25)
        cout << "你体重正常！" << endl;
    else if (BMI < 30)
        cout << "你超重了！" << endl;
    else
        cout << "你肥胖了！" << endl;

    return 0;
}