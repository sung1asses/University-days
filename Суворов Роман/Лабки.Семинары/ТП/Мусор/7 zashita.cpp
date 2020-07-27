#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
int main(){
	int n=5,m=3;
	int A[n][m];

	ofstream file1("file.txt");
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			file1 << rand()%10-5 << " ";
	file1.close();

	int B[n][m];

	ifstream file2("file.txt");
	if (file2.is_open())
    	for(int i=0; i<n; i++)
			for(int j=0; j<m; j++)
	    		file2 >> B[i][j];
	file2.close();

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++)
		    cout << B[i][j] << " ";  
		cout << endl; 
	}

	cout << endl;

	int sum=0,count=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(B[i][j]>0)count++;
			else if(B[i][j]<0)sum+=B[i][j];
		}
	}

	cout << "Summa otricatel'nih: " << sum << endl;
	cout << "Kol-vo polojitel'nih: " << count << endl;

	ofstream file3("file.txt", ios_base::in | ios_base::app);
	file3 << "\n\n";
	file3 << "Сумма отрицательных элементов: " << sum << endl;
	file3 << "Кол-во положительных элементов: " << count << endl;
	file3.close();

    return 0;
}