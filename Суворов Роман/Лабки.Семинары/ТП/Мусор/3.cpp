#include <iostream>
using namespace std;
int main()
{
	int n=3,m=4,P[n][m];

	for(int i=0;i<n;i++){
		for (int j = 0; j < m; ++j){
			P[i][j] = rand()%10+1;
		}
	}

	for(int i=0;i<n;i++){
		for (int j = 0; j < m; ++j){
			cout << P[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;

	int count;

	for(int i=0;i<n;i++){
		for (int j = 0; j < m; ++j){
			if(P[i][j]>1)count++;
		}
	}

	cout << count;

}