#include "SnackSLot.h"

SnackSlot::SnackSlot(const short slotSize)
{
	size = slotSize;
	cells = new Snack*[size];
	for (int i = 0; i < size; ++i)
	{
		cells[i] = nullptr;
	} //Интересно нужно ли это делать
}

SnackSlot::~SnackSlot()
{
	delete[] cells;
}

short SnackSlot::getSize()
{
	return size;
}

short SnackSlot::getSnackCount()
{
	return snackCount;
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

Snack* SnackSlot::giveSnack()
{
	if (snackCount > 0)
	{
		snackCount--;
		return cells[snackCount];
	}
}

