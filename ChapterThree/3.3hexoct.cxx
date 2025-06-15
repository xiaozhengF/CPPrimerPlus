#include <iostream>
/*
. cout << endl
功能：
输出换行符（\n）。
刷新输出缓冲区（flush）。
特点：
每次使用 endl 都会强制刷新缓冲区，确保输出立即显示到终端或文件。
适合需要实时输出的场景，例如调试或交互式程序。
性能：
因为包含缓冲区刷新操作，频繁使用 endl 会降低性能。
2. cout << "\n"
功能：
仅输出换行符（\n）。
不会刷新输出缓冲区。
特点：
输出可能暂时保存在缓冲区中，直到缓冲区满或程序结束时才显示。
更高效，适合不需要实时输出的场景。
性能：
不包含缓冲区刷新操作，性能更高。
*/
int main(){
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    cout << "Monsieur cuts a striking figure!\n";
    // cout << "chest = " << chest << " (43 in decimal)\n";
    // cout << "waist = " << waist << " (42 in hexadecimal)\n";
    // cout << "inseam = " << inseam << " (34 in octal)\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << hex << "waist = " << waist << " (42 in hexadecimal)\n";
    cout << oct << "inseam = " << inseam << " (42 in octal)\n";
    cout << '\a'; // alert
    return 0;
}