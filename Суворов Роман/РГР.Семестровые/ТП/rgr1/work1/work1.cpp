#include <iostream>

using namespace std;
int main()
{
    int x, y;
    cout << "Input x, y position: \n";
    cin >> x >> y;
    while(x<0 || y <0 || x>8 || y>8){
        cout << "Neverno! Poprobuite snova!\n";
        cin >> x >> y;
    }
    cout << "\n";
    for (int i = 1; i <= 8; ++i) {
        for (int j = 1; j <= 8; ++j)
            if (x == j && y == i) cout << "F ";
            else
                if (x==j || y==i || abs(x-j)==abs(y-i)) cout << "* ";
                else cout << "0 ";
        cout << "\n";
    }
}
