#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	cout << "\n\n";
	
	char temp;
	int i= 0;
    int j= str.length()-1;
	while(i<j)
    {
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
        j--;
    }
    i=0;
    j=str.length();
    for(i;i<j;i++){
    	cout << str[i] << endl;
    }
}