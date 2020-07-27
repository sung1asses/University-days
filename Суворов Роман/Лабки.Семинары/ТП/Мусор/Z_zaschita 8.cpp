#include <iostream>
#include <cstdlib>
using namespace std;
void setArr2(int rows,int collumns, int **arr){
	for(int i=0; i<rows; i++)
		for(int j=0; j<collumns; j++)
			arr[i][j] = rand()%14;

	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<collumns; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
int findSum(int rows,int collumns, int **arr){
	int sum = 0;
	for(int i=0; i<rows; i++)
		for(int j=0; j<collumns; j++)
			if(arr[i][j]>0)sum+=arr[i][j];

	return sum;
}
void setArr(int *A,int count){
	for(int i=0; i<count; i++)
		A[i] = rand()%10+1;

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
	return sr;
}
int findCount(int *A,int count,float sr){
	int k=0;
	for(int i=0; i<count; i++)
		if(A[i]<sr)k++;
	return k;
}
int main(){

	cout << "Задание 1:" << endl;
    int **Y = new int*[3];
    for (int i = 0; i < 3; ++i) Y[i] = new int[6];

    int **X = new int*[5];
    for (int i = 0; i < 5; ++i) X[i] = new int[4];

	cout << "Y:" << endl;
	setArr2(3,6,Y);
	cout << "X:" << endl;
	setArr2(5,4,X);

	int sum1=findSum(3,6,Y);
	int sum2=findSum(5,4,X);

	cout << "Summa v matrice Y: " << sum1 << endl;
	cout << "Summa v matrice X: " << sum2 << endl;

	cout << "\n\n" << "Задание 2:" << endl;

    int *A = new int[10];

    int *B = new int[15];

    cout << "A:" << endl;
	setArr(A,10);
	cout << "B:" << endl;
	setArr(B,15);

	float sr1 = findSr(A,10);
	float sr2 = findSr(B,15);

    int count1 = findCount(A,10,sr1);
    int count2 = findCount(B,15,sr2);

	cout << "Sr arifmet matricy A: " << sr1 << endl;
	cout << "Sr arifmet matricy B: " << sr2 << endl;
	cout << "Kol-vo elementow menshih srednego v matrice A: " << count1 << endl;
	cout << "Kol-vo elementow menshih srednego v matrice B: " << count2 << endl;

	cin.get();
}