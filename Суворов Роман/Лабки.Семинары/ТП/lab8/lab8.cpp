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
    int a,x;
    cout << "Enter number a,x: " << endl;
    cin >> a >> x;
    cout << "Wait for answer..." << endl;


    int n=0;
    double sum=0;
    while( (abs( pow(a,x)-sum) ) > 0.000001 ){

        if(n==0){
            sum = 1;
        }
        else{
            sum += pow( x*log(a), n )/fact(n);
        }

        n++;
    }

    cout << "Answer: " << sum << endl;
    cout << "count of iterations: " << n << endl;

    return 0;
}