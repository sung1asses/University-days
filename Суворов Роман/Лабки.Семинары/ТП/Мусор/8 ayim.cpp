#include <iostream>
#include <math.h>
using namespace std;
int fact(int n)
{
    int f;
    if (n == 0)
        f = 1;
    else
        f = n * fact(n - 1);
    return f;
}
int main()
{
    int C,n;
    cout << "Vvedite C,n: " << endl;
    cin >> C >> n;

    float A = fact(n)/fact(C-n)*fact(C+n);

    cout << "A =  " << A << endl;

    return 0;
}