#pragma once
#include<iostream>
#include<string>
using namespace std;
class CPU{
	string model;
	string socket;
	int clockSpeed;
	int cores;
public:
	CPU(string model = "Unknown", string socket = "Unknown", int clockSpeed = 1, int cores = 1);
	void Show()const;
	void SetModel(string model);
	void SetSocket(string socket);
	void SetClockSpeed(int clockSpeed);
	void SetCores(int cores);
	string GetModel()const;
	string GetSocket()const;
	int GetClockSpeed()const;
	int GetCores()const;
};

