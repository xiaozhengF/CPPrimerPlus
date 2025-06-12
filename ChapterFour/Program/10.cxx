#include <iostream>
#include <array>
int main(){
    using namespace std;
    array<int,3> arr;
    for(int i = 0; i < arr.size(); ++i){
        cout << "输入第" << (i + 1) << "次40米跑成绩: ";
        cin >> arr[i];
    }
    cout << arr.size() << "次40米跑平均成绩为: " << (arr[0] + arr[1] + arr[2]) / 3.0 << "秒" << endl;
    return 0;
}