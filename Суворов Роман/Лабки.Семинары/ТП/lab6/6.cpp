#include <iostream>
#include <string>
using namespace std;
struct Item
{
    string name;
    string shop;
    float price;
};
void printInformation(Item item)
{
    cout << "Name: " << item.name << "\n";
    cout << "Shop: " << item.shop << "\n";
    cout << "Price: " << item.price << "\n";
}
int main(){
    int n = 5;
    struct Item list[5]=
    {
        { "bread","amazing",399 },
        { "cheese","amazing",159 },
        { "milk","steak_house",1599 },
        { "choco","steak_house",4399 },
        { "rise","sperrow",99 },
    };
    string slovo;
    cout << "Vvedite slovo: " << endl;
    getline(cin,slovo);
    for(int i; i<n; i++){
        if(slovo == list[i].name)printInformation(list[i]);
    }
    return 0;
}