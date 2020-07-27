#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	int i=0,k,num=0,inp_num;
	cout << "input text" << endl;
	getline(cin, str);
	cout << "input index of word" << endl;
	cin >> inp_num;
	int flag = str.length();
	int val;
	while(i<=flag){
		k=0;
		val = int(str[i]);
		if((val>=65 && val<=90) || (val>=97 && val<=122)){
			num++;
			while((val>=65 && val<=90) || (val>=97 && val<=122)){
				k++;
				i++;
				if(i>flag){
					cout << "Bad index";
					break;
				}
				val = int(str[i]);
			}
			if(num==inp_num){
				cout << "number chars of the "<< inp_num <<" word:" << k << endl;
				break;
			}
		}
		i++;
	}
	if(i>flag){
		cout << "Bad index";
	}
}