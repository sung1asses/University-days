#include <iostream>

#include <iomanip>

using namespace std;

int main() {

	srand(time(0));

	int n=5,arr[n][n],arr_prod[n];

	for(int i=0;i<n;i++){
		for (int j = 0; j < n; ++j){
			// arr[i][j] = i+j;
			arr[i][j] = rand()%10+1;
		}
	}

	for(int i=0;i<n;i++){
		for (int j = 0; j < n; ++j){
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < n; ++i)
	{
		int flag = 1;
		for (int j = 0; j < n; ++j)
		{
			flag*= arr[i][j];
		}
		arr_prod[i] = flag;
	}

	for(int i=0;i<n;i++){
		for (int j = 0; j < n; ++j){
			cout << arr[i][j] << "\t";
		}
		if(arr_prod[i]!=0){
			cout << "\t=> " << arr_prod[i];
		}
		else{
			cout << "\t=> " << "Nel'zya";
		}
		cout << endl;
	}

	int summ[(n-1)*2] = {0,0,0,0,0,0,0,0};

	for(int i=0;i<n;i++){
		for (int j = 0; j < n; ++j){
			if(i==j-4){
				summ[0]+=arr[i][j-4];
			}
			if(i==j-3){
				summ[1]+=arr[i][j-3];
			}
			if(i==j-2){
				summ[2]+=arr[i][j-2];
			}
			if(i==j-1){
				summ[3]+=arr[i][j-1];
			}


			if(i+1==j){
				summ[4]+=arr[i+1][j];
			}
			if(i+2==j){
				summ[5]+=arr[i+2][j];
			}
			if(i+3==j){
				summ[6]+=arr[i+3][j];
			}
			if(i+4==j){
				summ[7]+=arr[i+4][j];
			}
		}
		cout << endl;
	}	

	for (int i = 0; i < (n-1)*2; ++i)
	{
		cout << summ[i] << endl;
	}

	return 0;
}