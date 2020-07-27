#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
int main(){

	ofstream inpf("answ.txt");
	inpf << 1 << " " << 4 << " " << 1;
	inpf.close();

	int a,b,c;

	ifstream outf("answ.txt");
	if (outf.is_open())
	{
		outf >> a >> b >> c;
    }
	outf.close();

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	float x1,x2;
	bool flag=true;
	float d = pow(b,2)-4*a*c;
	if(d < 0){
		cout << "Error, D<0";
		flag = false;
	}
	else{
		x1 = (-b+sqrtf(d))/(2*a);
		x2 = (-b-sqrtf(d))/(2*a);
	}
	ofstream inpf2("answ.txt", ios_base::in | ios_base::app);
	inpf2 << "\n\n";

	if(flag){
		float Z = x1*x2/(x1+x2);
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
		cout << "Z = " << Z;

		inpf2 << "x1: " << x1 << endl;
		inpf2 << "x2: " << x2 << endl;
		inpf2 << "Z " << Z << endl;
	}
	else{
		inpf2 << "D<0, Дискриминант меньше нуля!";
	}
	inpf2.close();

    return 0;
}