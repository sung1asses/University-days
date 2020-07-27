#include<iostream>
#include<math.h>
using namespace std;

int main(){
	// Задаем начальные параметры
	double P = 100;
	double skoT = 2.4 * pow(10,6);
	double SP = 1;
	double Sopt; // рассчитывает S оптимальную
	Sopt = skoT/SP;
	cout << "optimal'noe znachenie S: " << Sopt << "\n";
	int m = 3;
	double arrD[m] = { 0.01, 0.05, 0.1 }; // Задаем значения диаметров в массиве
	double koefT[m] = { 2, 10, 20 }; // Задаем значения коэффециентов для рассчёта T в массиве
	double skoP[m*m]; // Создаем пустой массив для результатов

	int index = 0; // Индекс для записи в результирующий массив skoP
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			skoP[index] = (4*P)/(3.1415*(pow(arrD[i],2)-pow((arrD[i]-2*arrD[i]/koefT[j]),2))); //Записываем и рассчитываем skoP
			index++;// Увеличиваем индекс на 1
		}
	}

	for (int i = 0; i < m*m - 1; i++)
	{
		for (int j = (m*m - 1); j > i; j--) // для всех элементов после i-ого
	    {
			if (skoP[j - 1] > skoP[j]) // если текущий элемент меньше предыдущего
	    	{
	        	int temp = skoP[j - 1]; // меняем их местами
	        	skoP[j - 1] = skoP[j];
	        	skoP[j] = temp;
	    	}
	    }
	}

	for(int i=0;i<m*m;i++){
		cout << "SKO P (" << i+1 << "): " << skoP[i] << "\n"; // Выводим skoP на экран
	}
	
	double znach=0; // Задаем огромное значение для выявления минимальной разницы

	for(int i=0;i<m*m;i++){
			if( skoP[i] < Sopt){
			znach = skoP[i];
		}
	}

	cout << "Otvet: " << znach; //выводим элемент с индеком минимального значения
	return 0;
}