#pragma once
#include "SnackSlot.h"
#include <iostream>
using namespace std;

class VendingMachine
{
public:
	VendingMachine(int maxCountSlots);
	~VendingMachine();

	int getSize();
	int getSlotsCount();
	int getEmptySlotsCount();

	void addSlot(SnackSlot* slot);
	Snack giveSnack(int slotNumber);
	void showProducts();
	bool isEmpty();
	bool isFilled();
	

private:
	int size = 0;
	int emptySlotsCount = 0;
	int slotsCount = 0;
	int snacksCount = 0;
	SnackSlot** slots;
};