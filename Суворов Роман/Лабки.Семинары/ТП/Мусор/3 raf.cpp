#include <iostream>
using namespace std;
int main()
{
	int n=4,m=5,B[n][m];

	for(int i=0;i<n;i++){
		for (int j = 0; j < m; ++j){
			B[i][j] = rand()%9-5;
		}
	}

	for(int i=0;i<n;i++){
		for (int j = 0; j < m; ++j){
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;

	int sum = 0, count = 0;

	for(int i=0;i<n;i++){
		for (int j = 0; j < m; ++j){
			if(B[i][j]>0)count++;
			else if(B[i][j]<0)sum+=B[i][j];
		}
	}

	cout << "Summa otricatel'nih: " << sum << endl;
	cout << "Kol-vo polojitel'nih: " << count;

}