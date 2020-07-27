#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    double d1 = 0.01, d2 = 0.05, d3 = 0.1;
    double sigma = 2400000, sp = 1;
    cout<<"vvedite predel tekuchesti i dopuskayemiy zapas prochnosti"<< endl;
    double e = sigma / sp;
    double a[3];
    double b[3];
    double c[3];
    double div[3] = { 2, 10, 20};
    for (int i=0; i<3; i++){
        a[i] = d1 / div[i];
        b[i] = d2 / div[i];
        c[i] = d3 / div[i];
    }
    vector< pair<double, double> > v;
    for (int i=0; i<3; i++){
        double cur = (4*500)/(3.14*(pow(d1,2)-pow((d1-(2*a[i])),2)));
        v.push_back(make_pair(cur, a[i]));
        cur = (4*500)/(3.14*(pow(d2,2)-pow((d2-(2*b[i])),2)));
        v.push_back(make_pair(cur, b[i]));
        cur = (4*500)/(3.14*(pow(d3,2)-pow((d3-(2*c[i])),2)));
        v.push_back(make_pair(cur, c[i]));
    }
    sort(v.begin(), v.end());
    int id;
    for (int i=0; i<v.size(); i++){
        if (e >= v[i].first){
            id = i;
        }
    }
    cout<<e<<endl;
    for (int i=0; i<v.size(); i++){
        cout<<v[i].first<<" ";
    }
    cout<<endl;
    cout<<"nayblizhaysheye min znacheniye"<<endl;
    cout<<v[id].first<<" tolshina stoyki "<<v[id].second;
}