#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {

	ofstream workf("text.txt");
	workf << "ROMA SOSI BIBU! SOSI, SOSI. AZAZAZAZA! Ti eblan? Chto ti pishesh tupoy!";
	workf.close();

    string str;

	ifstream out("text.txt");
	if (out.is_open())
    {
        while (! out.eof() )
        {
            getline (out,str);
        }
        out.close();
    }

	cout << str << endl;

	int i=0;
	int j=0;
	int kount=0;
	int val;
	while(i < str.length()){
		val = int(str[i]);
		if(val == 33 || val == 46 || val == 59 || val == 63)kount++;
		i++;
	}
	
	string str_arr[kount];

	i=0;
	j=0;
	while(i < str.length()){
		val = int(str[i]);
		if(val == 33 || val == 46 || val == 59 || val == 63)j++;
		else{
			str_arr[j].push_back(str[i]);
		}
		i++;
	}

	for(i=0; i<kount; i++){
		cout << str_arr[i] << endl;
	}

	for(i=0; i<kount; i++){
		int j=0, k = str_arr[i].length()-1;
		while(j<k){
			char temp = str_arr[i][j];
			str_arr[i][j] = str_arr[i][k];
			str_arr[i][k] = temp;
			j++;
			k--;
		}
	}
	cout << endl;
	for(i=0; i<kount; i++){
		cout << str_arr[i] << endl;
	}
    
}
