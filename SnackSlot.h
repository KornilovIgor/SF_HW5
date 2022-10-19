#pragma once
#include "Snack.h"

class SnackSlot
{
public:
	SnackSlot();
	SnackSlot(short const slotSize);
	~SnackSlot();

	short getSize();
	short getSnackCount();

	void addSnack(const Snack* const snack);
	bool isEmpty();
	bool isFilled();
	void slotShow();
	Snack giveSnack();

private:
	bool emptySlot = true;
	short size = 0;
	short snackCount = 0;
	Snack* snacks = nullptr;
};