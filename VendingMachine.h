#pragma once
#include "SnackSlot.h"

class VendingMachine
{
public:
	VendingMachine(int maxCountSlots);
	~VendingMachine();

	int getSize();
	int getEmptySlotsCount();

	void addSlot(SnackSlot* slot);
	Snack giveSnack(int slotNumber);
	void showProducts();	

private:
	int _size = 0;
	int _emptySlotsCount = 0;
	int snacksCount = 0;
	bool filled = false;
	SnackSlot* slots = nullptr;
};