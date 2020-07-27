#include <iostream>
using namespace std;
void bubbleSort(int *num, int size)
{
  // Для всех элементов
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = (size - 1); j > i; j--) // для всех элементов после i-ого
    {
      if (num[j - 1] < num[j]) // если текущий элемент меньше предыдущего
      {
        int temp = num[j - 1]; // меняем их местами
        num[j - 1] = num[j];
        num[j] = temp;
      }
    }
  }
}
int main(){
	const int M=8;
	const int N=5;
	int arr[M][N],A[M*N],B[M*N];
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			arr[i][j] = rand() % 10-1;
		}
	}
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cout << arr[i][j] << "   ";
		}
		cout<< endl;
	}
	int h = 0;
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
		    if(arr[i][j]!=0){  
	    		B[h] = arr[i][j];
    			A[h] = arr[i][j];
    			h++;
		    }
		}
	}
	cout<<endl;
	bubbleSort(B, h);
	for(int i=0; i<h; i++){
	    cout << A[i] << " ";   
	}
	cout << endl;
	for(int i=0; i<h; i++){
	    cout << B[i] << " ";   
	}
    return 0;
}