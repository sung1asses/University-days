#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
int main(){
	int n=4,m=3;
	int A[n][m];
	int sum=0,k=0;

	ofstream inpf("Array.txt");
	for(int i=0; i<n*m; i++){
		inpf << rand()%9-5 << " ";
	}
	inpf.close();

	int B[n][m];

	ifstream outf("Array.txt");
	if (outf.is_open())
	{
    	for(int i=0; i<n; i++){
    		for(int j=0; j<m; j++)
	    		outf >> B[i][j];
    	}
    }
	outf.close();

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++)
		    cout << B[i][j] << " ";
		cout << endl;
	}

	cout << endl;

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(B[i][j]<0) sum+=B[i][j];
		    else if(B[i][j]>0) k++;  
		}
	}

	ofstream inpf2("Array.txt", ios_base::in | ios_base::app);
	inpf2 << "\n\n";
	inpf2 << "Сумма отрицательных элементов: " << sum << endl;
	inpf2 << "Кол-во положительных элементов: " << k << endl;
	inpf2.close();

    return 0;
}
