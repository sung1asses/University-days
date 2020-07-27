#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float a = -3, b = 4, h = 0.5;
	float i=a;
	float prod=1;
	int sum=0, k=0;
	do{
		float y=i*2+i-2;
		if(y>=4 && y<=8){
			prod*=y;
		}
		else if(y>8 && y<11.5){
			float d = sqrtf(y)/(y+2.8);
			cout << "Deystviye. " << d << endl;
		}
		else if(11.5>=y && y<=20){
		    sum+=y;
		    k++;
		}
		i+=h;
	}while(i<b);

	float sr = sum/k;
	cout << "Proizvedeniye: " << prod << endl;
	cout << "Sredneye arifmeticheskoye: " << sr << endl;	

	return false;
}