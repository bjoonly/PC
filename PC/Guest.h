#pragma once
#include<string>
#include<iostream>
using namespace std;

class Guest{
	string name;
public:
	Guest(string name);
	void Show()const;
	void SetName(string name);
	string GetName()const;

};

