#include "Admin.h"

Admin::Admin(string name, string login, string password) :name(name), login(login), password(password) {}

void Admin::Show() const{
	cout << "Name: " << name<<endl;
}

void Admin::SetPassword(string login, string password, string newPassword){
	if (login == this->login && password == this->password)
		this->password = newPassword;
}

void Admin::SetLogin(string login){
		this->login = login;
}

void Admin::SetName(string name){
	this->name = name;
}

string Admin::GetName() const{
	return name;
}



