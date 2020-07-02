#include "RAM.h"

RAM::RAM(string model, string memoryType, int memory) :model(model), memoryType(memoryType) {
	SetMemory(memory);
}

void RAM::Show() const {
	cout << "Model: " << model << "\nMemoty type: " << memoryType << "\nMemory: " << memory << endl;
}

void RAM::SetModel(string model) {
	this->model = model;
}

void RAM::SetMemotyType(string memoryType) {
	this->memoryType = memoryType;
}

void RAM::SetMemory(int memory) {
	if (memory < 1)
		memory = 1;
	this->memory = memory;
}

string RAM::GetModel() const{
	return model;
}

string RAM::GetMemoryType() const{
	return memoryType;
}

int RAM::GetMemory() const{
	return memory;
}
