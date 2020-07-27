#include <iostream>
#include <string>
using namespace std;
int main()
{
cout<<"Vvedite predlojenie"<<endl;
string c;
getline(cin,c);
string arr[26][2] = {{"a","6_Buby"},{"b","6_Piki"},{"c","6_Chervi"},{"d","6_Kresti"},{"e","7_Buby"},{"f","7_Piki"},{"g","7_Chervi"},{"h","7_Kresti"},{"i","8_Buby"},{"j","8_Piki"},{"k","8_Chervi"},{"l","8_Kresti"},{"m","9_Buby"},{"n","9_Piki"},{"o","9_Chervi"},{"p","9_Kresti"},{"q","10_Buby"},{"r","10_Piki"},{"s","10_Chervi"},{"t","10_Kresti"},{"u","Valet_Buby"},{"v","Valet_Piki"},{"w","Valet_Chervi"},{"x","Valet_Kresti"},{"y","Dama_Buby"},{"z","Dama_Piki"}};

for(int j=0; j<c.length(); j++){
    bool flag = false;
    for(int i=0; i<26; i++){
        if(arr[i][0][0]==c[j]){
            cout << arr[i][1] << '.';
            flag = true;
        }
    }
    if(!flag) cout << c[j];
}
string key, keyword = "SecondTry";
cout << endl << endl << "vvedite parol: " << endl;
cin >> key;
if(key == keyword)cout << c;
else cout << "WASTED";

}
