#pragma once
#include "Snack.h"
#include <iostream>
using namespace std;

class SnackSlot
{
public:
	SnackSlot(short const slotSize);
	~SnackSlot();

	short getSize();
	void setSize(short size);
	short getSnackCount();
	void setSnackCount(short snackCount);

	void addSnack(Snack* const snack);
	bool isEmpty();
	bool isFilled();
	void slotShow();
	Snack giveSnack();

private:
	short size = 0;
	short snackCount = 0;
	Snack** cells = nullptr;
};