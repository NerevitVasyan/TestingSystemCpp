#pragma once
#include "MainHeader.h"

class User
{
public:
	string Login;
	string Password;
	string Name;
	string Phone;

	friend ostream & operator << (ostream & out, const User & u);
	friend istream & operator >> (istream & in, const User & u);
};

ostream & operator << (ostream & out, const User & u)
{
	out << "Login:    " << u.Login << endl;
	out << "Password: " << u.Password << endl;
	out << "Name:     " << u.Name << endl;
	out << "Phone:    " << u.Phone << endl;
	return out;
}

istream & operator >> (istream & in, User & u)
{
	char buffer[256];
	in.getline(buffer, 256);
	u.Login = buffer+10;

	in.getline(buffer, 256);
	u.Password = buffer+10;

	in.getline(buffer, 256);
	u.Name = buffer+10;

	in.getline(buffer, 256);
	u.Phone = buffer+10;

	
	return in;
}