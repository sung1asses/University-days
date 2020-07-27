#include <iostream>
using namespace std;
int main()
{
	int n=10,P[n];

	for(int i=0;i<n;i++){
		P[i] = rand()%10-5;
	}

	for(int i=0;i<n;i++){
		cout << P[i] << "\t";
	}

	cout << endl;

	int summ=0;

	for(int i=0;i<n;i++){
		if(P[i]>0)summ+=P[i];
	}

	cout << summ;

}