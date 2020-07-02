#include "Guest.h"

Guest::Guest(string name) :name(name) {}

void Guest::Show() const{
	cout << "Name: " << name << endl;
}

void Guest::SetName(string name){
	this->name = name;
}

string Guest::GetName() const{
	return name;
}
