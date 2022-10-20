#pragma once
#include "SnackSlot.h"

class VendingMachine
{
public:
	VendingMachine(int maxCountSlots);
	~VendingMachine();

	int getSize() const;
	int getEmptySlotsCount() const;
	int getSnacksCount() const;

	void addSlot(SnackSlot* slot);
	void giveSnack();

private:
	int _size;
	int _slotCount;
	int _emptySlotsCount;
	int _snacksCount;
	SnackSlot** slots;
};