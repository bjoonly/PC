#pragma once
#include<iostream>
#include<string>
using namespace std;
class Motherboard {
	string model;
	string chipset;
	string socket;
	string formFactor;
	int maxMemory;
public:
	Motherboard(string model = "Unknown", string chipset = "Unknown", string socket = "Unknown", string formFactor = "Unknown", int maxMemory = 1);
	void Show()const;
	void SetModel(string model);
	void SetChipset(string chipset);
	void SetSocket(string socket);
	void SetFormFactor(string formFactor);
	void SetMaxMemory(int maxMemory);
	string GetModel()const;
	string GetChipset()const;
	string GetSocket()const;
	string GetFormFactor()const;
	int GetMaxMemory()const;
};
