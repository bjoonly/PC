#pragma once
#include<iostream>
#include<string>
using namespace std;
class GraphicCard {
	string model;
	string GPU;
public:
	GraphicCard(string model = "Unknown", string GPU = "Unknown");
	void SetModel(string model);
	void SetGPU(string GPU);
	string GetModel()const;
	string GetGPU()const;
	void Show()const;
};

