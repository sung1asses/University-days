#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float y;
	float a = 0.1, b = 5, h = 0.25;
	float i=a;
	float sr_prod=1;
	int sr_k=0, k=0;
	bool flag = true;
	for(i; i<b; i+=h){
		y=(pow(i,2)-1)/i;
		if(y>=0.3 && y<=1){
			cout << "1. " << pow(sin(y),2)+2 << endl;
			flag = false;
		}
		else if(y>1 && y<2.25){
		    sr_prod*=y;
		    sr_k++;
		}
		else if(2.25>=y && y<5.5){
		    k++;
		}
	}

	float sr = exp(1./sr_k*log(sr_prod));
	if(flag) cout << "1. ------" << endl; 
	cout << "2. " << sr << endl;
	cout << "3. " << k << endl;	

	return false;
}