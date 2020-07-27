#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cout << "input text" << endl;
	getline(cin, str);

	string list = "AEIOUYaeiouy";

	int val;
	int i=0;
	while(i<=str.length()){
		val = int(str[i]);
		bool flag = false;
		if((val>=65 && val<=90) || (val>=97 && val<=122)){
			int k=i;
			while((val>=65 && val<=90) || (val>=97 && val<=122)){
				val = int(str[k+1]);
				for(int j=0; j<list.length(); j++)
					if(str[k] == list[j] && str[k] == str[k+1]){
						flag = true;
					}
				k++;
			}
			val = int(str[i]);
			while((val>=65 && val<=90) || (val>=97 && val<=122)){
				val = int(str[i+1]);
				if(flag){
					cout << str[i];
				}
				i++;
			}
			if(flag)
				cout << endl;
		}
		i++;
	}
}