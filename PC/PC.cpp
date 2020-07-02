#include "PC.h"

PC::PC() :admin(nullptr), guest(nullptr) {}

PC::PC(string pcCaseModel, string pcCaseFormFactor, string color, string cpuModel, string socket, int clockSpeed, int cores, string modelMotherBoard, string chipset, string socketMotherboard, string formFactor, int maxMemory, string modelRAM, string memoryType, int memory, string graphicCardModel, string GPU)
	:pcCase(CasePC(pcCaseModel, pcCaseFormFactor, color)), cpu(CPU(cpuModel, socket, clockSpeed, cores)), motherboard(Motherboard(modelMotherBoard, chipset, socketMotherboard, formFactor, maxMemory)), graphicCard(GraphicCard(graphicCardModel, GPU)),
	ram{ RAM(modelRAM,memoryType,memory), RAM(modelRAM, memoryType, memory) }, admin(nullptr), guest(nullptr) {}

void PC::Show() const {
	cout << "\nPC Case:\n";
	pcCase.Show();
	cout << "\nCPU:\n";
	cpu.Show();
	cout << "\nMotherboard:\n";
	motherboard.Show();
	cout << "\nGraphic card:\n";
	graphicCard.Show();
	cout << "\nRAM:\n";
	ram[0].Show();
	ram[1].Show();
	if (admin != nullptr) {
		cout << "\nAdmin:\n";
		admin->Show();
	}
	if (guest != nullptr) {
		cout << "\nGuest:\n";
		guest->Show();
	}
}

bool PC::AddAdmin(Admin& admin) {
	if (this->admin == nullptr) {
		this->admin = &admin;
		return true;
	}
	return false;
}

bool PC::AddGuest(Guest& guest) {
	if (this->guest == nullptr) {
		this->guest = &guest;
		return true;
	}
	return false;
}

bool PC::RemoveAdmin() {
	if (admin != nullptr) {
		admin = nullptr;
		return true;
	}
	return false;
}

bool PC::RemoveGuest() {
	if (guest != nullptr) {
		guest = nullptr;
		return true;
	}
	return false;
}

void PC::SetCasePc(string model, string formFactor, string color){
	pcCase.SetModel(model);
	pcCase.SetFormFactor(formFactor);
	pcCase.SetColor(color);
}

void PC::SetCPU(string model, string socket, int clockSpeed, int cores){
	cpu.SetModel(model);
	cpu.SetSocket(socket);
	cpu.SetClockSpeed(clockSpeed);
	cpu.SetCores(cores);
}

void PC::SetMotherboard(string model, string chipset, string socket, string formFactor, int maxMemory){
	motherboard.SetModel(model);
	motherboard.SetChipset(chipset);
	motherboard.SetSocket(socket);
	motherboard.SetFormFactor(formFactor);
	motherboard.SetMaxMemory(maxMemory);

}

void PC::SetGraphicCard(string model, string GPU){
	graphicCard.SetModel(model);
	graphicCard.SetGPU(GPU);
}

void PC::SetRAM(string model, string memoryType, int memory){
	for (int i = 0; i < 2; i++) {
		ram[i].SetModel(model);
		ram[i].SetMemotyType(memoryType);
		ram[i].SetMemory(memory);
	}
}
