#include "CPU.h"

CPU::CPU(string model, string socket, int clockSpeed, int cores) :socket(socket), model(model) {
	SetClockSpeed(clockSpeed);
	SetCores(cores);
}

void CPU::Show() const{
	cout << "Model: " << model << "\nSocket: " << socket << "\nClock speed: " << clockSpeed << "\nCores: " << cores << endl;
}

void CPU::SetModel(string model){
	this->model = model;
}

void CPU::SetSocket(string socket){
	this->socket = socket;
}

void CPU::SetClockSpeed(int clockSpeed){
	if (clockSpeed < 1)
		clockSpeed = 1;
	this->clockSpeed = clockSpeed;
}

void CPU::SetCores(int cores){
	if (cores < 1)
		cores = 1;
	this->cores = cores;
}

string CPU::GetModel() const {
	return model;
}

string CPU::GetSocket() const {
	return socket;
}

int CPU::GetClockSpeed() const {
	return clockSpeed;
}

int CPU::GetCores() const {
	return cores;
}






