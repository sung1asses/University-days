#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
    int a;
    cout << "Enter the number of seconds for timer:\n";
    cin >> a;
    Sleep(a*1000);
    cout << "\a";
    system("pause");
    return 0;
}