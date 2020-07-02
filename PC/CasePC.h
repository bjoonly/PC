#pragma once
#include<iostream>
#include<string>
using namespace std;
class CasePC{
	string model;
	string formFactor;
	string color;
public:
	CasePC(string model = "Unknown", string formFactor = "Unknown", string color = "Unknown");
	void Show()const;
	void SetModel(string model);
	void SetFormFactor(string formFactor);
	void SetColor(string color);
	string GetModel()const;
	string GetFormFactor()const;
	string GetColor()const;
};

