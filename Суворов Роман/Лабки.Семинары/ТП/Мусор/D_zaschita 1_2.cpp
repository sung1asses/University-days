#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float x;
	cout << "Input X: " << endl;
	cin >> x;

	float y;
	if(x<=0){
	    y=sin(x*sqrtf(fabs(pow(x,5)+2)));
	}
	else if(x>0 && x<1){
	    y=log(x)-pow(sin(x/3),2);
	}
	else{
	    y=sqrtf(x)+exp(x);
	}

	cout << "Output: " << y;	

	return false;
}