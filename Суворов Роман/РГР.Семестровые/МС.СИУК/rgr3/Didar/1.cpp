#include<iostream>
#include<math.h>
using namespace std;

int main(){
	// Задаем начальные параметры
	double P = 500, sigma_T = 2400000, S_P = 1, Sopt = sigma_T/S_P;
	cout << "S optimal'noe: " << Sopt << " Pa" << endl;
	double skoP[9]; // Создаем пустой массив для результатов

	skoP[0] = (4*P)/(3.1415*(pow(0.01,2)-pow((0.01-2*0.01/2),2))); //Записываем и рассчитываем skoP
	skoP[1] = (4*P)/(3.1415*(pow(0.01,2)-pow((0.01-2*0.01/10),2)));
	skoP[2] = (4*P)/(3.1415*(pow(0.01,2)-pow((0.01-2*0.01/20),2)));
	skoP[3] = (4*P)/(3.1415*(pow(0.05,2)-pow((0.05-2*0.05/2),2)));
	skoP[4] = (4*P)/(3.1415*(pow(0.05,2)-pow((0.05-2*0.05/10),2)));
	skoP[5] = (4*P)/(3.1415*(pow(0.05,2)-pow((0.05-2*0.05/20),2)));
	skoP[6] = (4*P)/(3.1415*(pow(0.1,2)-pow((0.1-2*0.1/2),2)));
	skoP[7] = (4*P)/(3.1415*(pow(0.1,2)-pow((0.1-2*0.1/10),2)));
	skoP[8] = (4*P)/(3.1415*(pow(0.1,2)-pow((0.1-2*0.1/20),2)));

	for (int i = 0; i < 9 - 1; i++) // Сортируем значения
	{
		for (int j = (9 - 1); j > i; j--) // для всех элементов после i-ого
	    {
			if (skoP[j - 1] > skoP[j]) // если текущий элемент меньше предыдущего
	    	{
	        	int temp = skoP[j - 1]; // меняем их местами
	        	skoP[j - 1] = skoP[j];
	        	skoP[j] = temp;
	    	}
	    }
	}

	for(int i=0;i<9;i++){
		cout << "SKO P (" << i+1 << "): " << skoP[i] << "\n"; // Выводим skoP на экран
	}
	
	double result = 0;

	for(int i=0;i<9;i++){
		if( skoP[i] > result && skoP[i] < Sopt ){ 
			result = skoP[i]; 
		}
	}

	cout << endl << "Otvet: " << result << " Pa";
	return 0;
}