#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {

	ofstream workf("text.txt");
	workf << "Привет как дела я тут просто так предложение написал";
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
	int count=1;
	int val;
	while(i < str.length()){
		val = int(str[i]);
		if(val == 32)count++;
		i++;
	}
	
	string str_arr[count];

	i=0;
	j=0;
	while(i < str.length()){
		val = int(str[i]);
		if(val == 32)j++;
		else{
			str_arr[j].push_back(str[i]);
		}
		i++;
	}

	// for(i=0; i<count; i++){
	// 	cout << str_arr[i] << endl;
	// }

	i=0;
	while(i<count){
		if(i+1<count){
			string temp = str_arr[i];
			str_arr[i] = str_arr[i+1];
			str_arr[i+1] = temp;
		}
		i+=2;
	}

	// cout << endl;
	for(i=0; i<count; i++){
		cout << str_arr[i] << " ";
	}
    
}
