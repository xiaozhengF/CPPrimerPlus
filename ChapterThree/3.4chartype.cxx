#include <iostream>
int main(){
    using namespace std;
    /*
    `char` 类型本身既可以是有符号（signed），也可以是无符号（unsigned），这取决于编译器的实现和平台。
    - 在大多数编译器和平台上，`char` 默认是 **signed char**，取值范围通常是 -128 到 127。
    - 但有些编译器（比如部分 ARM、部分嵌入式平台）默认 `char` 是 **unsigned char**，取值范围是 0 到 255。
    - C++ 标准只规定 `char` 至少能表示 0~127，但没有规定它一定有符号还是无符号。
    如果你需要明确有符号或无符号，建议直接写 `signed char` 或 `unsigned char`，而不是用 `char`。
    你可以用下面的代码测试你的平台上 `char` 的符号性：
    **总结：**  
    `char` 是否有符号由实现决定，不同平台可能不同。需要明确时请用 `signed char` 或 `unsigned char`。
    */
    char ch;
    if (char(-1) < 0)
        std::cout << "char is signed\n";
    else
        std::cout << "char is unsigned\n";
    return 0;
    cout << "Enter a character:"<< endl;
    cin >> ch;
    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character." << endl;
    return 0;
}