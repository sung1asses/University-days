#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Item
{
	string name;
	string pasport;
	string data_priezda;
	string nomer;
	string data_viezda;
	string stoimost_projivaniya;
	string stoimost_dop_uslug;
};

string printInformation(Item item)
{
    return "Full name: " + item.name + "\n" +
    "Passport: " + item.pasport + "\n" +
    "Arrival date: " + item.data_priezda + "\n" +
    "Number: " + item.nomer + "\n" +
    "Date of departure : " + item.data_viezda + "\n" +
    "Room rate: " + item.stoimost_projivaniya + "\n" +
    "Cost of additional services: " + item.stoimost_dop_uslug + "\n";
}
int main() {
	struct Item list[10]=
    {
        { "Dungeon Master 01","00000001","01.01.01","0001","02.02.01","300$","300$" },
        { "Dungeon Master 02","00000002","01.01.02","0002","02.02.02","300$","300$" },
        { "Dungeon Master 03","00000003","01.01.03","0003","02.02.03","300$","300$" },
        { "Dungeon Master 04","00000004","01.01.04","0004","02.02.04","300$","300$" },
        { "Dungeon Master 05","00000005","01.01.05","0005","02.02.05","300$","300$" },
        { "Dungeon Master 06","00000006","01.01.06","0006","02.02.06","300$","300$" },
        { "Dungeon Master 07","00000007","01.01.07","0007","02.02.07","300$","300$" },
        { "Dungeon Master 08","00000008","01.01.08","0008","02.02.08","300$","300$" },
        { "Dungeon Master 09","00000009","01.01.09","0009","02.02.09","300$","300$" },
        { "Dungeon Master 10","00000010","01.01.10","0010","02.02.10","300$","300$" },
    };

	ofstream workf("Hostel.txt");
	for(int i=0; i<10; i++){
		workf << printInformation(list[i]);
		workf << "*********************************************************************"<<endl;	
	}
	workf.close();

	ifstream out("Hostel.txt");
	if (out.is_open())
	{
		char ch;
		while (out.get(ch))
		{
			cout << ch;
		}
	}
	out.close();

	string str;
	cout << "Write Full Name of person: ";
	getline(cin, str);
	ofstream choice("custom.txt");
	bool flag = true;
	for(int i=0; i<10; i++){
		if(list[i].name == str){
			choice << printInformation(list[i]);
			flag = false;
		}
	}
	if(flag)choice << str << endl << "Takih zapisey net!";
	cout << "Vash vibor sohranen v fail 'custom.txt'";
	choice.close();
}