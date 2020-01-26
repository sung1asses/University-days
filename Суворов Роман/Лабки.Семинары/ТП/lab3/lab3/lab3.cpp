#include <iostream>

using namespace std;
bool isLocalMinimum(int el, int right, int upp, int left, int down)
{
	/*ѕроверка границы, затем проверка соседа*/
	if(i>0 && value>a[i-1][j] ) return false;
	if(j>0 && value>a[i] [j-1]) return false;
	/* m - 1 */ if(i<m-1 && value>a[i+1][j] ) return false;
	/* n - 1 */ if(j<n-1 && value>a[i] [j+1]) return false;
 
	return true;
}
void main(){
	const int M=3;
	const int N=3;
	int arr[M][N] = {{0,0,0}, {0,0,0}, {0,0,0}};
	cout << "Input matrix:" << endl;
	for(int i=0;i<M;i++){
		cout << i+1 <<" row:" << endl;
		for(int j=0;j<N;j++){
			cout << j+1 << " element: "<< endl;
			cin >> arr[i][j];
		}
	}
	cout << "Matrix: " << endl;
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl << endl;
	}

}