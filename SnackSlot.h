#pragma once
#include "Snack.h"
#include <iostream>
using namespace std;

class SnackSlot
{
public:
	SnackSlot(short slotSize);
	~SnackSlot();
	int addSnack(Snack* snack);
	Snack giveSnack();

private:
	short size = 0;
	bool slotIsEmpty = true;
	short snackCount = 0;
	Snack* slot;
};