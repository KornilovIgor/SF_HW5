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
	void slotShow();
	Snack giveSnack();

private:
	bool _emptySlot = true;
	short _size = 0;
	short _snackCount = 0;
	Snack* _snacks = nullptr;
};