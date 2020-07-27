#include <iostream>
using namespace std;
bool isLocalMinimum(int el, int right, int up, int left, int down)
{
	if(right!=0 && el>right) return false;
	if(up!=0 && el>up) return false;
	if(left!=0 && el>left) return false;
	if(down!=0 && el>down) return false;
 
	return true;
}
int main(){
	const int M=3;
	const int N=3;
	int arr[M][N];
	cout << "Input matrix:" << endl;
	for(int i=0;i<M;i++){
		cout << i+1 <<" row:" << endl;
		for(int j=0;j<N;j++){
			cout << j+1 << " element: "<< endl;
			cin >> arr[i][j];
		}
	}
	int count;
	cout << "Matrix: " << endl;
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
		    int right=0, up=0, left=0, down=0, el=arr[i][j];
		    if(j!=N-1) right = arr[i][j+1];
		    if(i!=0) up = arr[i-1][j];
		    if(j!=0) left = arr[i][j-1];
		    if(i!=M-1) down = arr[i+1][j];
		    if(isLocalMinimum(el,right,up,left,down)){
		         count++;
		         cout << arr[i][j] << "*  ";
		    }
		    else{
		        cout << arr[i][j] << "  ";
		    }
		}
		cout << endl << endl;
	}
    return 0;
}