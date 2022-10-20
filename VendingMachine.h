#pragma once
#include "SnackSlot.h"

class VendingMachine
{
public:
	VendingMachine(int maxCountSlots);
	~VendingMachine();

	int getSize();
	int getEmptySlotsCount();
	int getSnacksCount();

	void addSlot(SnackSlot* slot);
	void giveSnack();

private:
	int _size;
	int _slotCount = 0;
	int _emptySlotsCount = 0;
	int _snacksCount = 0;
	SnackSlot** slots = nullptr;
};