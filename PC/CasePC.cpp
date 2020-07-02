#include "CasePC.h"

CasePC::CasePC(string model, string formFactor, string color) :model(model), formFactor(formFactor), color(color) {}

void CasePC::Show() const {
	cout << "Model: " << model << "\nForm factor: " << formFactor << "\nColor: " << color << endl;
}

void CasePC::SetModel(string model){
	this->model = model;
}

void CasePC::SetFormFactor(string formFactor){
	this->formFactor = formFactor;
}

void CasePC::SetColor(string color){
	this->color = color;
}

string CasePC::GetModel() const{
	return model;
}

string CasePC::GetFormFactor() const{
	return formFactor;
}

string CasePC::GetColor() const{
	return color;
}
