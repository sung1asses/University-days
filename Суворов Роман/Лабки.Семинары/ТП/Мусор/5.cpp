#include <iostream>
using namespace std;
int main()
{
	int n=6,m=5,P[n][m],K[6];

	for(int i=0;i<n;i++){
		for (int j = 0; j < m; ++j){
			P[i][j] = rand()%10-5;
		}
		K[i]=0;
	}

	for(int i=0;i<n;i++){
		for (int j = 0; j < m; ++j){
			cout << P[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;

	for(int i=0;i<n;i++){
		for (int j = 0; j < m; ++j){
			if(P[i][j]<0)K[i]++;
		}
	}

	for(int i=0;i<n;i++){
		cout << K[i] << " ";
	}

}