	#include<iostream>
	#include<math.h>
	using namespace std;

	int main(){
		double VK = 5;// Начальные переменные

		double R = exp(1./3.*log(VK/3.1415)); //Вычисляем радиус

		double H = VK/( 3.1415 * pow(R,2) ); //Вычисляем высоту

		cout << "R: " << R <<  "\n";
		cout << "H: " << H ;
		return 0;
	}