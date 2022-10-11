#pragma once
#include "Snack.h"
#include <iostream>
using namespace std;

class SnackSlot
{
public:
	SnackSlot(short slotSize);
	~SnackSlot();

	short getSize();
	short getSnackCount();

	void addSnack(Snack* const snack);
	bool isEmpty();
	bool isFilled();
	void slotShow();
	Snack* giveSnack();

private:
	short size = 0;
	short snackCount = 0;
	Snack** cells = nullptr;
};