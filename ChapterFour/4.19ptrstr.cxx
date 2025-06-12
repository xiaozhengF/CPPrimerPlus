#include <iostream>
#include <cstring>
int main(){
    using namespace std;
    char animal[20] = {"bear"};
    const char *  bird = {"wren"}; //字符串字面值是只读的，不能修改
    char * ps;
    cout << animal << " and ";
    cout << bird << "\n";
    cout << "Enter a kind of animal: ";
    cin >> animal;
    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *)animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    ps = new char[strlen(bird) + 1]; // 分配足够的内存空间
    strcpy(ps, animal); 
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int*)animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete [] ps;
    return 0;
}