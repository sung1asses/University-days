#include<iostream>
#include<math.h>
using namespace std;

double Sigma_P(double P, double d, double t){
	return (4*P)/(3.1415*(pow(d,2)-pow((d-2*t),2)));
}

double Difference(double S_opt, double sigma_P){
	return S_opt - sigma_P;
}

int main(){
	double P = 500, sigma_T = 1900000, S_P = 3, S_opt;
	S_opt = sigma_T/S_P;
	cout << "S_opt: " << S_opt << " Pa" << endl;
	double d[3] = { 0.01, 0.05, 0.1 }, t_koef[3] = { 0.5, 0.1, 0.05 }, sigma_P[9];

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			sigma_P[i*3+j] = Sigma_P( P, d[i], d[i]*t_koef[j] );
		}
	}
	for(int i=0;i<9;i++){
		cout << "sigma_P["<< i+1 <<"]: " << sigma_P[i] << " Pa" << endl;
	}

	double min_value = pow(10,10);
	int min_index = 0;

	bool flag = false;
	for(int i=0;i<9;i++){
		double value = Difference( S_opt, sigma_P[i] );
		if( value > 0 && value < min_value ){
			min_value = value;
			min_index = i;
			flag = true;
		}
	}

	if(flag){
		cout << "Podhodyashee znachenie: " << sigma_P[min_index] << " Pa";
	}
	else{
		cout << "Podhodyashego znacheniya net!";
	}
	return 0;
}