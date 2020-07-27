#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double V_k = 120;

	double r = exp(1./3.*log(V_k/3.1415));

	double h = V_k/( 3.1415 * pow(r,2) );

	cout << "R: " << r << " m" << endl;
	cout << "H: " << h << " m";
	return 0;
}