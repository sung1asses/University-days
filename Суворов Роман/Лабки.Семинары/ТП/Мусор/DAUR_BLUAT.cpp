#include <iostream>
#include <string>
using namespace std;

int main(){
string str;
getline(cin,str);
string str_copy=str;
cout << "\n____________________\n";
char temp;
int i= 0, password=123,kod;
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
cout<<"Vvedite parol"<<endl;
cin>>kod;
if(kod==password) cout<<str_copy; 
else cout << "Agent" << endl;
}
