#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
void setArr(int *A,int count){
	for(int i=0; i<count; i++)
		A[i] = rand()%10+1;

	for(int i=0; i<count; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}
int findMin(int *A,int count){
	int min = A[0];
	for(int i=0; i<count; i++)
		if(A[i]<min) min = A[i];
	return min;
}
int findMax(int *A,int count){
	int max = A[0];
	for(int i=0; i<count; i++)
		if(A[i]>max) max = A[i];
	return max;
}
int findSum(int *A,int count){
	int sum = 0;
	for(int i=0; i<count; i++)
		sum+=A[i];
	return sum;
}
int main(){

	cout << "Задание 1:" << endl;
    int *X = new int[10];

    int *Y = new int[15];

	cout << "X:" << endl;
	setArr(X,10);
	cout << "Y:" << endl;
	setArr(Y,15);

	int max_X = findMax(X,10);
	int max_Y = findMax(Y,15);

	float Z=sqrt(pow(max_X,2)+pow(max_Y,2));

	cout << "Z = " << Z;

	cout << "\n\n" << "Задание 2:" << endl;
	 
    int *A = new int[12];

    int *B = new int[14];

    cout << "A:" << endl;
	setArr(A,12);
	cout << "B:" << endl;
	setArr(B,14);

	int min_A = findMin(A,12);
	int min_B = findMin(B,14);

	int X_ = findSum(A,12);
	int Y_ = findSum(B,14);

	if(X_<Y_){
		Z = X_*min_A;
	}
	else{
		Z = Y_*min_B;
	}

	cout << "Z = " << Z;

	return 0;
}