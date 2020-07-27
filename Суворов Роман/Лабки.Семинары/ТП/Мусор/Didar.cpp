#include <iostream>
#include <cstdlib>
#include <cstring>
struct bank{int nomer_pl; char fam_pl[15]; char fam_pol[15]; int nomer_pol; float sum;} b[5];
using namespace std;
int main()
{
int i,n;
b[1].nomer_pl=1222;
b[2].nomer_pl=1223;
b[3].nomer_pl=1224;
b[4].nomer_pl=1225;
b[5].nomer_pl=1226;
strcpy(b[1].fam_pl,"Lee");
strcpy(b[2].fam_pl,"Ti");
strcpy(b[3].fam_pl,"Son");
strcpy(b[4].fam_pl,"Win");
strcpy(b[5].fam_pl,"Ten");
b[1].nomer_pol=12;
b[2].nomer_pol=13;
b[3].nomer_pol=14;
b[4].nomer_pol=15;
b[5].nomer_pol=16;
strcpy(b[1].fam_pol,"Net");
strcpy(b[2].fam_pol,"Di");
strcpy(b[3].fam_pol,"Az");
strcpy(b[4].fam_pol,"Den");
strcpy(b[5].fam_pol,"Tennison");
b[1].sum=1212.5;
b[2].sum=4125.25;
b[3].sum=4521.25;
b[4].sum=1212.52;
b[5].sum=1234.5;
cout<<b[1].nomer_pl<<'\t'<<b[i].fam_pl<<'\t'<<b[i].nomer_pol<<'\t'<<b[i].fam_pol<<'\t'<<b[i].sum<<endl;
cout<<"vvedite n poluchatelya"<<endl;
cin>>n;
for(i=1;i<=5;i++)
if(n==b[i].nomer_pol){ cout<<b[i].sum<<endl;} else
cout<<"ERROR"<<endl;
return 0;
}