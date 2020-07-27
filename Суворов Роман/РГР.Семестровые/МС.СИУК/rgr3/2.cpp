#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double V_k = 105;

	double r = exp(1./3.*log(V_k/3.1415));

	double h = V_k/( 3.1415 * pow(r,2) );

	cout << "Radius: " << r << " m" << endl;
	cout << "Height: " << h << " m";
	return 0;
}