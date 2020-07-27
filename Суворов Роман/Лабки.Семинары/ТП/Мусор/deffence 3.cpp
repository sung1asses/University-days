#include <iostream>
using namespace std;
int main()
{
	int m=5,arr[m][m];
	for(int i=0; i<m; i++){
		for(int j=0; j<m; j++){
			cin >> arr[i][j];
		}
	}

	for(int i=0; i<m; i++){
		int k=0;
		for(int j=0; j<m; j++){
			if(arr[i][j]==arr[j][i]){
				k++;
			}
		}
		if(k==m){
			cout << "element: " << i+1 << endl;	
		}
		
	}	
}
