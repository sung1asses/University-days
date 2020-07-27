#include<iostream>
#include<math.h>
using namespace std;

int main(){
	// Задаем начальные параметры
	double P = 500;
	double sigma_T = 2400000	;
	double S_P = 2;
	double S_opt; // рассчитывает S оптимальную
	S_opt = sigma_T/S_P;
	cout << "S optimal'noe: " << S_opt << " Pa" << endl;
	double d[3] = { 0.01, 0.05, 0.1 }; // Задаем значения диаметров в массиве
	double t_koef[3] = { 0.5, 0.1, 0.05 }; // Задаем значения коэффециентов для рассчёта T в массиве
	double sigma_P[9]; // Создаем пустой массив для результатов

	int koef = 0; // Индекс для записи в результирующий массив sigma_P
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			sigma_P[koef] = (4*P)/(3.1415*(pow(d[i],2)-pow((d[i]-2*d[i]*t_koef[j]),2))); //Записываем и рассчитываем sigma_P
			koef++;// Увеличиваем индекс на 1
		}
	}
	for(int i=0;i<9;i++){
		cout << "sigma p "<< i+1 <<": " << sigma_P[i] << " Pa" << endl; // Выводим sigma_P на экран
	}
	
	double min_value = pow(10,10); // Задаем огромное значение для выявления минимальной разницы
	int min_index; // переменная для записи индекса самого близкого элемента

	for(int i=0;i<9;i++){
		double value = S_opt - sigma_P[i]; //расчитываем разницу
		if( value > 0 && value < min_value ){ // если разница больше 0 и меньше переменной с минимальным значением
			min_value = value; // перезаписываем минимальное значение
			min_index = i; //перезаписываем индекс
		}
	}

	cout << "Otvet: " << sigma_P[min_index] << " Pa"; //выводим элемент с индеком минимального значения
	return 0;
}