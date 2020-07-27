#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cout << "input text: " << endl;
	getline(cin, str);
	int i=0, count=0, n=0, index=-1;
	while(i<=str.length()){
		int val = int(str[i]);
		if((val>=65 && val<=90) || (val>=97 && val<=122)){
			if(index==-1)index = i;
			n++;
		}
		else if (n==4){
			for(int j=0; j<4;j++){
				cout << str[j+index];
			}
			cout << endl;
			count++;
			index=-1;
			n=0;
		}
		else {
			n=0;
			index=-1;
		}
		i++;
	}
	cout << "kol-vo slov s 4 bukvami: " << count;

	return false;
}