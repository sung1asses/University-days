#include <iostream>
using namespace std;
void bubbleSort(int *num, int size)
{
  // Для всех элементов
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = (size - 1); j > i; j--) // для всех элементов после i-ого
    {
      if (num[j - 1] > num[j]) // если текущий элемент меньше предыдущего
      {
        int temp = num[j - 1]; // меняем их местами
        num[j - 1] = num[j];
        num[j] = temp;
      }
    }
  }
}
int main(){
	int n=6;
	int A[n][n];
	int B[n*n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			A[i][j] = rand() % 10;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << A[i][j] << "   ";
		}
		cout<< endl;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
    		B[i*n+j] = A[i][j];
		}
	}
	for(int i=0;i<n*n;i++){
		cout << B[i] << " ";
	}
	cout<<endl;
	bubbleSort(B, n*n);
	for(int i=0; i<n*n; i++){
	    cout << B[i] << " ";   
	}
    return 0;
}