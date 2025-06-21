#include <iostream>
#include <fstream>
#include <cstdlib>
int main()
{
    using namespace std;
    fstream fin;
    fin.open("09.txt");
    if (!fin.is_open())
    {
        cout << "Cound not open the file." << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    char ch;
    int count = 0;
    while ((ch = fin.get()) != EOF)
        count++;
    // 不统计空格换行制表符
    // while (fin >> ch)
    //     count++;
    cout << "there are " << count << " characters in file\n";
    fin.close();
    return 0;
}