#include <iostream>
using namespace std;
int main()
{
	int n=5,m=5,P[n][m];

	for(int i=0;i<n;i++){
		for (int j = 0; j < m; ++j){
			cin >> P[i][j];
		}
	}

	for(int i=0;i<n;i++){
		for (int j = 0; j < m; ++j){
			cout << P[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;

	int proizved=1;

	for(int i=0;i<n;i++){
		for (int j = 0; j < m; ++j){
			if(i==j+1 && P[i][j]<0)proizved*=P[i][j];
		}
	}

	cout << proizved;

}