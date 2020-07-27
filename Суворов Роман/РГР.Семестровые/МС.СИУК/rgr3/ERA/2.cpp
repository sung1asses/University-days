	#include<iostream>
	#include<math.h>
	using namespace std;

	int main(){
		double V_k = 10;// Начальные переменные

		double r = exp(1./3.*log(V_k/3.1415)); //Вычисляем радиус

		double h = V_k/( 3.1415 * pow(r,2) ); //Вычисляем высоту

		cout << "radius rezervuara: " << r << " m" << endl;
		cout << "visota rezervuara: " << h << " m";
		return 0;
	}