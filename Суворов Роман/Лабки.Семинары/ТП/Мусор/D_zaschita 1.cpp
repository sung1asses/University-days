#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float x;
	cout << "Input X: " << endl;
	cin >> x;

	float y = sqrtf(fabs(7*x+1.2))/(cos(pow(x,2))+pow(sin(x),2))+sqrtf(2*pow(x,5)+1.2)/log(5*x-45);

	cout << "Output: " << y;	

	return false;
}