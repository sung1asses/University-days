#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cout << "input text" << endl;
	getline(cin, str);
	int i=0, count = 0;
	while(i<=str.length()){
		int val = int(str[i]);
		if(val>=48 && val<=57)count++;
		i++;
	}
	cout << "Kol-vo cifr v stroke: " << count;
}