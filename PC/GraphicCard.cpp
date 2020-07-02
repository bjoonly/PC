#include "GraphicCard.h"

GraphicCard::GraphicCard(string model, string GPU) :model(model), GPU(GPU) {}

void GraphicCard::SetModel(string model) {
	this->model = model;
}

void GraphicCard::SetGPU(string GPU) {
	this->GPU = GPU;
}

string GraphicCard::GetModel() const {
	return model;
}

string GraphicCard::GetGPU() const {
	return GPU;
}

void GraphicCard::Show() const {
	cout << "Model: " << model << "\nGPU: " << GPU << endl;
}
