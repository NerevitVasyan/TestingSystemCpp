#pragma once


#include "MainHeader.h"
#include "Menu.h"
#include "User.h"


class TestingService
{
	list<User> Users;
	User * SelectedUser;
	const char * UserData = "users.cts";
	const char * TestData = "tests.cts";

public:

	TestingService()
	{
		
	}

	void Start()
	{
		vector<string> Options = { "Registration","Login","Exit" };

		Menu menu(Options,"Welcome to testing system");
		string selected = menu.GetOption();


	}

	void GetAllUsers()
	{
		//ofstream fout (UserData,ofstream::app);

		//User u;
		//u.Login = "vasyan228";
		//u.Name = "Vitalii";
		//u.Password = "qwerty";
		//u.Phone = "0676985526";

		//fout << u;

		//fout.close();

		ifstream fin(UserData);
		

		if (!fin.is_open())
		{
			cout << "UserData file is not found" << endl;
			return;
		}

		while (fin.peek() != EOF)
		{
			User u;
			fin >> u;
			Users.push_back(u);
		}

	}





};