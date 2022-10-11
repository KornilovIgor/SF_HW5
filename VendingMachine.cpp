#include "VendingMachine.h"

VendingMachine::VendingMachine(int maxCountSlots)
{
	size = maxCountSlots;
	slots = new SnackSlot*[maxCountSlots];
}

VendingMachine::~VendingMachine()
{
	delete[] slots;
}

int VendingMachine::getSize()
{
	return size;
}

int VendingMachine::getSlotsCount()
{
	return slotsCount;
}

int VendingMachine::getEmptySlotsCount()
{
	for (int i = 0; i < slotsCount; ++i)
	{
		if ((slots[i]->isEmpty()) == true)
		{
			++emptySlotsCount;
		}
	}
	return emptySlotsCount;
}

void VendingMachine::addSlot(SnackSlot* slot)
{
	slots[slotsCount] = slot;
	++slotsCount;
}

void VendingMachine::showProducts()
{
	for (int i = 0; i < slotsCount; ++i)
	{
		cout << "Слот №" << i;
		slots[i]->slotShow();
		snacksCount += slots[i]->getSnackCount();
	}
	cout << "В автомате осталось всего товаров: " << snacksCount << endl;
}


