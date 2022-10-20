#include "VendingMachine.h"
#include <iostream>
using namespace std;

VendingMachine::VendingMachine(int size) : _size(size)
{
	_emptySlotsCount = _size;
	slots = new SnackSlot*[size];
}

VendingMachine::~VendingMachine()
{
	delete[] slots;
}

int VendingMachine::getSize()
{
	return _size;
}

int VendingMachine::getEmptySlotsCount()
{
	return _emptySlotsCount;
}

int VendingMachine::getSnacksCount()
{
	return _snacksCount;
}

void VendingMachine::addSlot(SnackSlot* slot)
{
	slots[_slotCount] = slot;
	--_emptySlotsCount;
	++_slotCount;
	_snacksCount += slot->getSnackCount();
}

void VendingMachine::giveSnack()
{
	--_snacksCount;
	slots[_slotCount - 1]->giveSnack();
	if (slots[_slotCount - 1]->getSnackCount() == 0)
	{
		++_emptySlotsCount;
	}
}
