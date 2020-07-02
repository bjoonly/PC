#pragma once
#include"Admin.h"
#include"Guest.h"
#include"CasePC.h"
#include"CPU.h"
#include"GraphicCard.h"
#include"Motherboard.h"
#include"RAM.h"
class PC{
	CasePC pcCase;
	CPU cpu;
	Motherboard motherboard;
	GraphicCard graphicCard;
	RAM ram[2];
	Admin* admin;
	Guest* guest;
public:
	PC();
	PC(string pcCaseModel, string pcCaseFormFactor, string color, string cpuModel, string socket, int clockSpeed, int cores, string modelMotherBoard, string chipset, string socketMotherboard, string formFactor, int maxMemory,
		string modelRAM, string memoryType, int memory, string graphicCardModel, string GPU);

	void Show()const;
	bool AddAdmin(Admin& admin);
	bool AddGuest(Guest& guest);
	bool RemoveAdmin();
	bool RemoveGuest();

	void SetCasePc(string model, string formFactor, string color);
	void SetCPU(string model, string socket, int clockSpeed, int cores);
	void SetMotherboard(string model, string chipset, string socket, string formFactor, int maxMemory);
	void SetGraphicCard(string model, string GPU);
	void SetRAM(string model, string memoryType, int memory);
	
};
