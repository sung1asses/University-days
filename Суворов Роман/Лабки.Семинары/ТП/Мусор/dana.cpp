#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	getline(cin,str);
	for(int j=0;j<str.length();j++){
		int i(str[j]);
		if(i>=65 && i<=90){
			cout << i-64;
    		if(int(str[j+1])>=65 && int(str[j+1])<=90){
    		    cout << ".";
    		}
		}
		else if(i>=97 && i<=122){
			cout << i-96;
    		if(int(str[j+1])>=97 && int(str[j+1])<=122){
    		    cout << ".";
    		}
		}
		else{
		    cout << str[j];
		}
	}
	string key, keyword = "hellow world";
	cout << endl << endl << "vvedite kluch: ";
	getline(cin,key);
	if(key == keyword){
	    cout << str;
	}
	
	
}
