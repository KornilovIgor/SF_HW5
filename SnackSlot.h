#pragma once
#include "Snack.h"

class SnackSlot
{
public:
	SnackSlot(short slotSize);
	~SnackSlot();

	short getSize();
	short getSnackCount();

	void addSnack(Snack* snack);
	void giveSnack();

private:
	short _size = 0;
	short _snackCount = 0;
	Snack** _snacks = nullptr;
};