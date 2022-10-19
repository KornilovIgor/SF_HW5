#include "SnackSLot.h"
#include <iostream>
using namespace std;

SnackSlot::SnackSlot()
{
}

SnackSlot::SnackSlot(short const slotSize)
{
	size = slotSize;
	snacks = new Snack [size];
}

SnackSlot::~SnackSlot()
{
	delete[] snacks;
}

short SnackSlot::getSize()
{
	return size;
}

short SnackSlot::getSnackCount()
{
	return snackCount;
}

void SnackSlot::addSnack(const Snack* const snack)
{
	if (snackCount < size)
	{
		snacks[snackCount] = *snack;
		++snackCount;
		emptySlot = false;
	}
}

bool SnackSlot::isEmpty()
{
	return emptySlot;
}

bool SnackSlot::isFilled()
{
	return ((size == snackCount) ? true : false);
}

void SnackSlot::slotShow()
{
	if (emptySlot)
	{
		cout << " | пустой слот" << endl;
	}
	else
	{
		for (int i = 0; i < snackCount; ++i)
		{ 
			cout << " | " << snacks[i].getName();
		}
		cout << " | " << endl;
	}
}

Snack SnackSlot::giveSnack()
{
	if (snackCount > 0)
	{
		snackCount--;
		if (snackCount == 0)
		{
			emptySlot = true;
		}
		return snacks[snackCount];
	}
}