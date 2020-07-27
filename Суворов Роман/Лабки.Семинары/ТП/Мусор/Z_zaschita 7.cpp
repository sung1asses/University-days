#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
int main(){
	int n=8;
	int A[n];

	ofstream inpf("Array.txt");
	for(int i=0; i<n; i++){
		inpf << rand()%10-5 << " ";
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

	int P=1,S=0,k=0;
	for(int i=0; i<n; i++){
	    if(B[i]<0){
	    	P*=B[i];
	    	S+=B[i];
	    	k++;
	    }
	}

	float Y = (pow(S,k)-k*P)/(P+S);

	cout << "Y = " << Y;

	ofstream inpf2("Array.txt", ios_base::in | ios_base::app);
	inpf2 << "\n\n";
	inpf2 << "Произведение отрицательных элементов: " << P << endl;
	inpf2 << "Сумма отрицательных элементов: " << S << endl;
	inpf2 << "Кол-во отрицательных элементов: " << k << endl;
	inpf2 << "Y: " << Y << endl;
	inpf2.close();

    return 0;
}