#include <iostream>
#include <cstdlib>
using namespace std;
void setArr2(int rows,int collumns, int **arr){
	for(int i=0; i<rows; i++)
		for(int j=0; j<collumns; j++)
			arr[i][j] = rand()%6-3;

	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<collumns; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void calcCount(int rows,int collumns, int **arr){
	int count[3] = {0,0,0};
	for(int i=0; i<rows; i++)
		for(int j=0; j<collumns; j++){
			if(arr[i][j]<0)count[0]++;
			else if(arr[i][j]==0)count[1]++;
			else count[2]++;
		}
	cout << "Kol-vo elementrv men'she 0: " << count[0] << endl;
	cout << "Kol-vo elementrv ravnoy 0: " << count[1] << endl;
	cout << "Kol-vo elementrv bol'she 0: " << count[2] << endl;
}
void setArr(int *A,int count){
	for(int i=0; i<count; i++)
		A[i] = rand()%9;

	for(int i=0; i<count; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}
float findSr(int *A,int count){
	int sum = 0;
	int k=0;
	for(int i=0; i<count; i++){
		sum += A[i];
		k++;
	}
	float sr = sum/k;
	cout << "Sr znach: " << sr << endl;
	return sr;
}
int main(){

	cout << "Task 1:" << endl;
    int **A = new int*[3];
    for (int i = 0; i < 3; ++i) A[i] = new int[5];

    int **B = new int*[4];
    for (int i = 0; i < 4; ++i) B[i] = new int[4];

	cout << "A:" << endl;
	setArr2(3,5,A);
	calcCount(3,5,A);
	cout << "B:" << endl;
	setArr2(4,4,B);
	calcCount(4,4,B);

	cout << "\n\n" << "Task 2:" << endl;
	 
    int *X = new int[10];
    int *Y = new int[15];
    int *Z = new int[20];

    cout << "X:" << endl;
	setArr(X,10);
	findSr(X,10);
	cout << "Y:" << endl;
	setArr(Y,15);
	findSr(Y,15);
	cout << "Z:" << endl;
	setArr(Z,20);
	findSr(Z,20);

	return false;
}