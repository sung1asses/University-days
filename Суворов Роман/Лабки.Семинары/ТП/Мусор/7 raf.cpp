#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	int n=12;
	ofstream textF("Text.txt");
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i%2==0 && j%2==0) textF << i*i << "\t";
			else textF << "--" << "\t";
		}
		textF << endl;
	}
	textF.close();
}
