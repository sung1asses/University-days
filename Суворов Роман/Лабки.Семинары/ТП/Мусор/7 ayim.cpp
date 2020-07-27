#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	ofstream textF("Text.txt");
	textF << "C++ (/ˌsiːˌplʌsˈplʌs/) is a high-level, general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or 'C with Classes'. The language has expanded significantly over time, and modern C++ has object-oriented, generic, and functional features in addition to facilities for low-level memory manipulation. It is almost always implemented as a compiled language, and many vendors provide C++ compilers, including the Free Software Foundation, LLVM, Microsoft, Intel, Oracle, and IBM, so it is available on many platforms";
	textF.close();

	string str;
	char ch;

	ifstream out("Text.txt");
	if (out.is_open())
	{
	    while(!out.eof()){
	        out.get(ch);
	        str += ch;
	    }
		out.close();
		str.pop_back();
    }

	string chars;
	cout << "Vvedite vashi simvoly podryad: ";
	cin >> chars;

	int count = 0;
	ofstream resultF("result.txt");
	for(int i=0; i<str.length();i++){
		for(int j=0; j<chars.length(); j++){
			if(str[i]==chars[j]){
				count++;
				resultF << str[i] << " ";
			}
		}
	}
	resultF << "\nКоличество совпадений: " << count;
	resultF.close();
    
}
