#include <iostream>
#include <cmath>
using namespace std;
int main(){
	const float pi = 3.1415926;
	float maxT = 0;
	float maxV = 0;
	float v = 0;
	for(float t=0; t<=3.14; t+=0.1){
	    v = pi*pi/16 * sin(pi/4*t+pi/8);
	    cout<<"t="<<t<<" v="<<v<<endl;
	    if(v >= maxV){
	        maxV = v;
	        maxT = t;
	    }
	}
	cout << "maxV " << maxV <<  "maxT " << maxT<< endl;
    return 0;
}