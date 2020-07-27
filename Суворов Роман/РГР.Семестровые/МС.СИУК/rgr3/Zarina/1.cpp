#include<iostream>
#include<math.h>
using namespace std;

int main(){
	// Задаем начальные параметры
	double P = 1000;
	double sigma_T = 2000000;
	double S_P = 2;
	double Sopt = sigma_T/S_P;
	cout << "S optimal'noe: " << Sopt << " Pa" << endl;
	double sigma_P[9]; // Создаем пустой массив для результатов

	sigma_P[0] = (4*P)/(3.1415*(pow(0.01,2)-pow((0.01-2*0.01/2),2))); //Записываем и рассчитываем sigma_P
	sigma_P[1] = (4*P)/(3.1415*(pow(0.01,2)-pow((0.01-2*0.01/10),2)));
	sigma_P[2] = (4*P)/(3.1415*(pow(0.01,2)-pow((0.01-2*0.01/20),2)));
	sigma_P[3] = (4*P)/(3.1415*(pow(0.05,2)-pow((0.05-2*0.05/2),2)));
	sigma_P[4] = (4*P)/(3.1415*(pow(0.05,2)-pow((0.05-2*0.05/10),2)));
	sigma_P[5] = (4*P)/(3.1415*(pow(0.05,2)-pow((0.05-2*0.05/20),2)));
	sigma_P[6] = (4*P)/(3.1415*(pow(0.1,2)-pow((0.1-2*0.1/2),2)));
	sigma_P[7] = (4*P)/(3.1415*(pow(0.1,2)-pow((0.1-2*0.1/10),2)));
	sigma_P[8] = (4*P)/(3.1415*(pow(0.1,2)-pow((0.1-2*0.1/20),2)));

	for(int i=0;i<9;i++){
		cout << "SKO P["<< i+1 <<"]: " << sigma_P[i] << " Pa" << endl;
	}
	
	double result = 0;

	for(int i=0;i<9;i++){
		if( sigma_P[i] > result && sigma_P[i] < Sopt ){ 
			result = sigma_P[i]; 
		}
	}

	cout << "Otvet: " << result << " Pa";
	return 0;
}