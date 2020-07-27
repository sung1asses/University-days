#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cout << "input text" << endl;
	getline(cin, str);
	int i=0;
	int max_index=0;
	int max_count=0;
	while(i<=str.length()){
		int val = int(str[i]);
		int val_ = int(str[i-1]);
		if(val == 97 && (val_<65 || ( val_>90 && val_<97 ) || val_>122) ){
			int b = 0;
			int a = i;
			while((val>=65 && val<=90) || (val>=97 && val<=122)){
				i++;
				b++;
				val = int(str[i]);
			}
			if(max_count < b){
				max_count = b;
				max_index = a;	
			}
		}
		i++;
	}
	for(i=max_index + max_count; i>=max_index; i--){
		cout << str[i];
	}
}