#include <iostream>
#include <cmath>
using namespace std;
void main(){//максимальное ускорение достигается тогда, когда синус равен +-1
	const float pi = 3.1415926;//Извлекаем t из-под синуса
	int x = 1;
	double t;
	t = (asin(16/(pi*pi)*x)-pi/8)/(pi/4);
	cout << "Answer: " << t << endl;
}