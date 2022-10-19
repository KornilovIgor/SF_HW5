#pragma once
#include "SnackSlot.h"

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
	int _size = 0;
	int _emptySlotsCount = 0;
	int _slotsCount = 0;
	int snacksCount = 0;
	SnackSlot* slots = nullptr;
};