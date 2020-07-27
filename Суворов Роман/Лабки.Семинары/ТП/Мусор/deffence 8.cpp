#include <iostream>
#include <cstdlib>
using namespace std;
void setArr(int rows,int collumns, int **arr){
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
int calcCount(int rows,int collumns, int **arr){
	int count = 0;
	for(int i=0; i<rows; i++)
		for(int j=0; j<collumns; j++)
			if(arr[i][j]>7)count++;

	return count;
}
int calcSled(int rows,int collumns, int **arr){
	int sled = 0;
	for(int i=0; i<rows; i++)
		for(int j=0; j<collumns; j++)
			if(i==j)sled+=arr[i][j];

	return sled;
}
int main(){

	cout << "Задание 1:" << endl;
    int **arr1 = new int*[3];
    for (int i = 0; i < 3; ++i) arr1[i] = new int[5];

    int **arr2 = new int*[4];
    for (int i = 0; i < 4; ++i) arr2[i] = new int[4];

	cout << "Матрица 1:" << endl;
	setArr(3,5,arr1);
	cout << "Матрица 2:" << endl;
	setArr(4,4,arr2);

	int count1=calcCount(3,5,arr1);
	int count2=calcCount(4,4,arr2);

	cout << "Кол-во элементов больше 7 в первой матрице: " << count1 << endl;
	cout << "Кол-во элементов больше 7 во второй матрице: " << count2 << endl;

	cout << "\n\n" << "Задание 2:" << endl;
	 
    int **A = new int*[3];
    for (int i = 0; i < 3; ++i) A[i] = new int[3];
	 
    int **B = new int*[4];
    for (int i = 0; i < 4; ++i) B[i] = new int[4];
	 
    int **C = new int*[3];
    for (int i = 0; i < 3; ++i) C[i] = new int[3];

    cout << "Матрица A:" << endl;
	setArr(3, 3, A);
	cout << "Матрица B:" << endl;
	setArr(4, 4, B);
	cout << "Матрица С:" << endl;
	setArr(3, 3, C);

	int sled[3] = { 0, 0, 0};

	sled[0]=calcSled(3, 3, A);
	sled[1]=calcSled(4, 4, B);
	sled[2]=calcSled(3, 3, C);

	int min = sled[0];
	int index = 1;

	for(int i=0; i<3; i++)
		if(min > sled[i]){
			min = sled[i];
			index = i+1;
		}

	cout << "Минимальный след у " << index << " матрицы: " << min;
	cin.get();
}