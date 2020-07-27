#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main() {
	float skoT = 2.4 * pow(10, 6);    
	float skoP[9];
	int p = 500;
	int Sp = 2;
	float ogr;
	float masst[9];
	float massd[3] = { 0.01,0.05,0.1 };
	float massdrob[3] = { 2,10,20 };
	int k = 0;
	
	ogr = skoT / Sp;
	printf("%f",ogr);
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			
			masst[k] = massd[i] / massdrob[j];
			k++;
		}
	}
	int r = 0;
	int n = 0;
	for (int j = 0; j < 9; j++)
	{
		skoP[j] = (4 * p) / (3.14 * (pow(massd[r], 2) - pow(massd[r] - 2 * masst[j], 2)));
		n++;
		if (n == 3)
		{
			r++;
			n = 0;
		}
	}



	for (int j = 0; j < 9; j++)
	{
		printf("%f", skoP[j]);
		cout << " ";
	}

	cout << endl;

	double result = pow(10,10);
	int result_index = 0;

	for(int i=0;i<9;i++){
		double value = ogr - skoP[i];
		cout << value << endl;
		if( value > 0 && value < result ){
			result = value;
			result_index = i;
		}
	}

	cout << "Result = ";
	printf("%f", skoP[result_index]);

}