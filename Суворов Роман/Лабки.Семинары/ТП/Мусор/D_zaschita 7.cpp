#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
int main(){
	int n=7;
	int A[n];
	int a=0,b;

	ofstream inpf("Array.txt");
	for(int i=0; i<n; i++){
		inpf << rand()%3 << " ";
	}
	inpf.close();

	int B[n];

	ifstream outf("Array.txt");
	if (outf.is_open())
	{
    	for(int i=0; i<n; i++){
    		outf >> B[i];
    	}
    }
	outf.close();

	for(int i=0; i<n; i++){
	    cout << B[i] << " ";   
	}

	cout << endl;

	for(int i=0; i<n; i++){
	    if(B[i]==0) b++ ;
	    else if(B[i]>0) a+=B[i];  
	}

	float Z = tan(pow(a+b,3))/(b+sqrtf(a+1));

	cout << "Z = " << Z;

    return 0;
}