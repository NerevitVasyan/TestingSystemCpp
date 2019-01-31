#pragma once
#include "MainHeader.h"

enum Keys
{
	left = 75,
	right = 77,
	up=72,
	down = 80,
	enter = 13
};

class Menu
{
	vector<string> Options;
	string Title;
	int CursorPosition;
	int PositionCount;

public:

	Menu(vector<string> _options,string _title)
	{
		Options = _options;
		Title = _title;
		CursorPosition = 0;
		PositionCount = Options.size();
	}

	void CursorUp()
	{
		if (CursorPosition == 0)
		{
			CursorPosition = PositionCount - 1;
		}
		else
		{
			CursorPosition--;
		}
	}

	void CursorDown()
	{
		if (CursorPosition == PositionCount - 1)
		{
			CursorPosition = 0;
		}
		else
		{
			CursorPosition++;
		}
	}

	string GetOption()
	{
		
		while (true)
		{
			system("cls");
			ShowOptions();
			int flag = _getch();
			if (flag != Keys::enter)
			{
				int key = _getch();
				if (key == Keys::down)
				{
					CursorDown();
				}
				if (key == Keys::up)
				{
					CursorUp();
				}			
			}
			else
			{
				return Options[CursorPosition];
			}
			
		}
		return "";
	}

	void ShowOptions()
	{
		cout <<"-----" <<Title << "-----"<<endl<<endl;
		int j = 0;
		for (auto i = Options.begin(); i != Options.end(); i++,j++)
		{
			cout << "\t";
			if (j == CursorPosition)
			{
				cout << "==> ";
			}
			cout << *i << endl;
		}
	}


};