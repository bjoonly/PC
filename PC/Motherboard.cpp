#include "Motherboard.h"

Motherboard::Motherboard(string model, string chipset, string socket, string formFactor, int maxMemory) :socket(socket), formFactor(formFactor), model(model), chipset(chipset) {
	SetMaxMemory(maxMemory);
}

void Motherboard::Show() const {
	cout << "Model: " << model << "\nChipset: " << chipset << "\nSocket: " << socket << "\nForm factor: " << formFactor << "\nMax memory: " << maxMemory << endl;
}

void Motherboard::SetModel(string model) {
	this->model = model;
}

void Motherboard::SetChipset(string chipset) {
	this->chipset = chipset;
}

void Motherboard::SetSocket(string socket) {
	this->socket = socket;
}

void Motherboard::SetFormFactor(string formFactor) {
	this->formFactor = formFactor;
}

void Motherboard::SetMaxMemory(int maxMemory) {
	if (maxMemory < 1)
		maxMemory = 1;
	this->maxMemory = maxMemory;
}

string Motherboard::GetModel() const{
	return model;
}

string Motherboard::GetChipset() const
{
	return chipset;
}

string Motherboard::GetSocket() const
{
	return socket;
}

string Motherboard::GetFormFactor() const
{
	return formFactor;
}

int Motherboard::GetMaxMemory() const
{
	return maxMemory;
}
