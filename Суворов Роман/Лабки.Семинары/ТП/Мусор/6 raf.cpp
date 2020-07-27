#include <iostream>
#include <string>
using namespace std;
struct Kinoteatr
{
    string kinoteatr;
    string film;
    string janr;
    string period_pokaza;
    string vremya;
};
int main(){
    int n = 10;
    struct Kinoteatr list[10]=
    {
        { "Almata","Vampirskya saga 1","Melodrama","01.01.1999-20.03.1999","18.00-20.00" },
        { "Mart","Vampirskya saga 2","Melodrama","01.01.1999-20.03.1999","16.00-18.00" },
        { "Mango","Vampirskya saga 3","Melodrama","01.01.1999-20.03.1999","14.00-16.00" },
        { "Almata","Vampirskya saga 4","Melodrama","01.01.1999-20.03.1999","17.00-19.00" },
        { "Mart","Vampirskya saga 5","Melodrama","01.01.1999-20.03.1999","20.00-22.00" },
        { "Almata","Vampirskya saga 6","Melodrama","01.01.1999-20.03.1999","18.00-20.00" },
        { "Mart","Vampirskya saga 7","Melodrama","01.01.1999-20.03.1999","16.00-18.00" },
        { "Mango","Vampirskya saga 8","Melodrama","01.01.1999-20.03.1999","14.00-16.00" },
        { "Almata","Vampirskya saga 9","Melodrama","01.01.1999-20.03.1999","17.00-19.00" },
        { "Mart","Vampirskya saga 10","Melodrama","01.01.1999-20.03.1999","20.00-22.00" },
    };
    string punct;
    cout << "Vvedite kinoteatr: " << endl;
    getline(cin,punct);
    cout << "\n";
    bool flag = true;
    for(int i=0; i<n; i++){
        if(punct == list[i].kinoteatr){
            cout << list[i].film << ", ";
            flag = false;
        }
    }
    if(flag)cout << "Takogo kinoteatra net!";
    return 0;
}