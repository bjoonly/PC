#pragma once
#include<iostream>
#include<string>
using namespace std;
class RAM {
	string model;
	string memoryType;
	int memory;
public:
	RAM(string model = "Unknown", string memoryType = "Unknown", int memory = 1);
	void Show()const;
	void SetModel(string model);
	void SetMemotyType(string memoryType);
	void SetMemory(int memory);
	string GetModel()const;
	string GetMemoryType()const;
	int GetMemory()const;

};
