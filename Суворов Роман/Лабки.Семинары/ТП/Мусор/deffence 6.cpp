#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Item
{
    string name;
    string fio;
    string phone;
    string cost;
    string count;
};
void printInformation(Item item)
{
    cout << "Name: " << item.name << "\n";
    cout << "F I O: " << item.fio << "\n";
    cout << "Phone: " << item.phone << "\n";
    cout << "Price: " << item.cost << "\n";
    cout << "Count: " << item.count << "\n";
}
int main(){
	vector<Item> item_list;

	string useless;
	int i=0;
	int k=0;
	bool flag = true;
	int inp;
	while(flag){
		cout << "Введите символ для продолжения:" << endl
		<< "1 - Ввести обьект" << endl
		<< "2 - Поиск по товару"<< endl
		<< "3 - Закрыть программу"<< endl;
		cin >> inp;
		switch(inp){
			case(1):{
				getline(cin, useless);
				item_list.push_back({});
				cout << "Название товара:" << endl;
				getline(cin, item_list[k].name);
				cout << "ФИО поставщика:" << endl;
				getline(cin, item_list[k].fio);
				cout << "Номер телефона поставщика:" << endl;
				getline(cin, item_list[k].phone);
				cout << "Цена товара:" << endl;
				getline(cin, item_list[k].cost);
				cout << "Кол-во товара:" << endl;
				getline(cin, item_list[k].count);
				k++;
				break;
			}
			case(2):{
				getline(cin, useless);
				string stuff;
				bool flag = true;

				cout << "\n\n\n\n\n\n\n\n\n";
				cout << "Введите название товара:"<< endl;
				getline(cin, stuff);
				for(int j=0; j<k; j++){
					if(item_list[j].name == stuff){
						cout << "Товар №" << j+1 << endl;
						printInformation(item_list[j]);
						flag = false;
					}
					if(flag){
						cout << "Ваш товар не найден!"<< endl;
					}
				}
				cout << "Нажмите Enter чтоб продолжить";
				getline(cin,useless);
				break;
			}
			case(3):{
				flag = false;
				break;
			}
			default:{
				cout << "Вы ввели совсем не то, что нужно!!" << endl;
				break;
			}
		}
		cout << "\n\n\n\n\n\n\n\n\n";
	}
    return 0;
}