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
    float S;
    cout << "Vvedite S, ne bol'she 6.3: " << endl;
    cin >> S;
    float s=0;
    int n=1;
    while(S-s>0.001 && n<100){
        s+=pow(2,n)/fact(n);
        cout << s << " " << n << endl;
        n++;
    }

    cout << "Poluchivsheesya chislo: " << s << endl;
    cout << "Kol-vo iteraciy: " << n << endl;

    return 0;
}