#include "VendingMachine.h"

VendingMachine::VendingMachine(int countMaxSlots)
{
	size = countMaxSlots;
	slots = new SnackSlot*[countMaxSlots];
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
	emptySlotsCount = 0;
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

Snack VendingMachine::giveSnack(int slotNumber)
{
	return slots[slotNumber]->giveSnack();
}

void VendingMachine::showProducts()
{
	cout << "Состояние автомата: " << endl;
	snacksCount = 0;
	for (int i = 0; i < slotsCount; ++i)
	{
		cout << "Слот №" << i;
		slots[i]->slotShow();
		snacksCount += slots[i]->getSnackCount();
	}
	cout << "Всего батончиков в автомате: " << snacksCount << endl;
}

bool VendingMachine::isEmpty()
{
	if (slotsCount == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool VendingMachine::isEmpty()
{
	if (slotsCount == size)
	{
		return true;
	}
	else
	{
		return false;
	}
}

