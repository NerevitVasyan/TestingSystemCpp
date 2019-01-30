#pragma once
#include "MainHeader.h"

enum Keys
{
	left = 224,
	right = 224,
	up=2,
	down = 2
};

class Menu
{
	list<string> Options;


public:

	Menu(list<string> _options)
	{
		Options = _options;
	}

	string GetOption()
	{
		while (!_kbhit())
		{
			cout << _getch() << endl;
		}
		return "asd";
	}

};