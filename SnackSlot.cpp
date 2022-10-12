#include "SnackSLot.h"

SnackSlot::SnackSlot(short const slotSize)
{
	size = slotSize;
	cells = new Snack* [size];
}

SnackSlot::~SnackSlot()
{
	delete[] cells;
}

short SnackSlot::getSize()
{
	return size;
}

void SnackSlot::setSize(short size)
{
	this->size = size;
}

short SnackSlot::getSnackCount()
{
	return snackCount;
}

void SnackSlot::setSnackCount(short snackCount)
{
	this->snackCount = snackCount;
}

void SnackSlot::addSnack(Snack* const snack)
{
	if (snackCount < size)
	{
		cells[snackCount] = snack;
		++snackCount;
	}
}

bool SnackSlot::isEmpty()
{
	return ((snackCount == 0) ? true : false);
}

bool SnackSlot::isFilled()
{
	return ((size == snackCount) ? true : false);
}

void SnackSlot::slotShow()
{
	for (int i = 0; i < snackCount; ++i)
	{ 
		cout << " | " << cells[i]->getName();
	}
	cout << " | " << endl;
}

Snack SnackSlot::giveSnack()
{
	if (snackCount > 0)
	{
		snackCount--;
		return *cells[snackCount];
	}
}