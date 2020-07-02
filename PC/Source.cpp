#include<iostream>
#include"PC.h"
using namespace std;
int main() {
	Admin admin("Vasa", "qwer", "1234");
	Guest g1("User"), g2("Olga");
	PC pc1("Crystal Series 680X RGB","E-ATX","White","i9-9900K","Socket 1151",3600,8,
	"Asus ROG STRIX Z390-E GAMING","Intel Z390","Socket 1151","ATX",64,"HyperX Fury RGB 32gb"," DDR4",32,"MSI RTX 2080 Gaming X Trio","GeForce RTX 2080 (TU104)"),
	pc2("ARTLINE Overlord","Midi-Tower","Black","Intel Core i9-10980XE","Socket 2066",3,18,"PRIME X299-DELUXE",
	"Intel X299","Socket 2066","ATX",128, "3600 Gaming","DDR4",64,"NVIDIA GeForce RTX 2080 Ti","NVIDIA GeForce RTX 2080 Ti");
	cout << "First PC:\n";
	pc1.Show();
	cout << "\n-------------------------------------------------------\n";
	cout << "\nAdd admin and guest to first pc:\n";
	pc1.AddAdmin(admin);
	pc1.AddGuest(g2);
	pc1.Show();
	cout << "\n-------------------------------------------------------\n";
	cout << "\nSecond PC:\n";
	pc2.Show();
	cout << "\n-------------------------------------------------------\n";
	cout << "\nAdd admin and guest to second pc:\n";
	pc2.AddGuest(g1);
	pc2.AddAdmin(admin);
	pc2.Show();
	cout << "\n-------------------------------------------------------\n";
	cout << "\nRemove admin from second PC:\n";
	pc2.RemoveAdmin();
	pc2.Show();
	cout << "\n-------------------------------------------------------\n";
	cout << "\nFirst PC:\n";
	pc1.Show();
	return 0;
}