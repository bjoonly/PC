#pragma once
#include<string>
#include<iostream>
using namespace std;

class Admin {
	string name;
	string login;
	string password;
public:
	Admin(string name, string login, string password);
	void Show()const;
	void SetPassword(string login, string password, string newPassword);
	void SetLogin(string login);

	void SetName(string name);
	string GetName()const;
};

