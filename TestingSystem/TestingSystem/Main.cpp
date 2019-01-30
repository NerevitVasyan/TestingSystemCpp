#include "MainHeader.h"
#include "User.h"
#include "Menu.h"

int main()
{
	////ofstream fout("usersData.txt", ofstream::app | ofstream::out);

	////User u;
	////u.Login = "vasyan228";
	////u.Name = "VitaliiYalovenko";
	////u.Password = "qwerty";
	////u.Phone = "0676985526";

	////fout << u;
	//
	//ifstream fin("usersData.txt", ifstream::in);

	//User u;
	//fin >> u;

	//cout << u << endl;

	Menu m({"asd","asd"});
	m.GetOption();
	

	system("pause");
}