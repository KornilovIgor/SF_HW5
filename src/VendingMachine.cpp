#include "VendingMachine.h"

VendingMachine::VendingMachine(int size)
{
	_size = size;
	_slotCount = 0;
	_emptySlotsCount = _size;
	_snacksCount = 0;
	slots = new SnackSlot*[size];

}

VendingMachine::~VendingMachine()
{
	delete[] slots;
}

int VendingMachine::getSize() const
{
	return _size;
}

int VendingMachine::getEmptySlotsCount() const
{
	return _emptySlotsCount;
}

int VendingMachine::getSnacksCount() const
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
