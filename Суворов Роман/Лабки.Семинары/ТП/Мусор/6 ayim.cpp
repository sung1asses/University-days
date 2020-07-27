#include <iostream>
#include <string>
using namespace std;
struct Polyeti
{
    string punct_naznach;
    string nomer_reysa;
    string type;
};
void printInfo(Polyeti polyet)
{
    cout << "Punkt naznacheniya: " << polyet.punct_naznach << "\n";
    cout << "Nomer reysa: " << polyet.nomer_reysa << "\n";
    cout << "Tip samolyeta: " << polyet.type << "\n\n";
}
int main(){
    int n = 10;
    struct Polyeti list[10]=
    {
        { "Almaty","4124Zipper5123","boing993" },
        { "Astana","4124Zipper5123","passagirsky" },
        { "Moskva","4124Zipper5123","boing993" },
        { "Sankt Piterburg","4124Zipper5123","passagirsky" },
        { "Semey","4124Zipper5123","boing993" },
        { "Almaty","4124Zipper5123","passagirsky" },
        { "Astana","4124Zipper5123","boing993" },
        { "Moskva","4124Zipper5123","passagirsky" },
        { "Sankt Piterburg","4124Zipper5123","boing993" },
        { "Semey","4124Zipper5123","passagirsky" },
    };
    string punct;
    cout << "Vvedite punct: " << endl;
    getline(cin,punct);
    cout << "\n";
    bool flag = true;
    for(int i=0; i<n; i++){
        if(punct == list[i].punct_naznach){
            printInfo(list[i]);
            flag = false;
        }
    }
    if(flag)cout << "V takoe mesto samolyeti ne letaut";
    return 0;
}