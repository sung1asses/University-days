#include <iostream>
using namespace std;
int main()
{
	int n=10,P[n];

	for(int i=0;i<n;i++){
		P[i] = rand()%10;
	}

	for(int i=0;i<n;i++){
		cout << P[i] << "\t";
	}

	cout << endl;

	int min=P[1];

	for(int i=0;i<n;i++){
		if(P[i]>0 && P[i]<min && i%2==1)min=P[i];
	}

	cout << min;

}