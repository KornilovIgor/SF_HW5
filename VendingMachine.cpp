#include "VendingMachine.h"
#include <iostream>
using namespace std;

VendingMachine::VendingMachine(int countMaxSlots)
{
	_size = countMaxSlots;
	slots = new SnackSlot[countMaxSlots];
}

VendingMachine::~VendingMachine()
{
//	delete[] slots; //так и не понял почему ошибка если это раскомментировать :(
}

int VendingMachine::getSize()
{
	return _size;
}

int VendingMachine::getSlotsCount()
{
	return _slotsCount;
}

int VendingMachine::getEmptySlotsCount()
{
	_emptySlotsCount = 0;
	for (int i = 0; i < _size; ++i)
	{
		if ((slots[i].isEmpty()) == true)
		{
			++_emptySlotsCount;
		}
	}
	return _emptySlotsCount;
}

void VendingMachine::addSlot(SnackSlot* slot)
{
	if (this->isFilled() == true)
	{
		cout << "Машина заполнена. Слот не добавлен" << endl << endl;
	}
	else
	{
		for (int i = 0; i < _size; ++i)
		{
			if ((slots[i].isEmpty()) == true)
			{ 
				slots[i] = *slot;
				++_slotsCount;
				break;
			}
		}
	}
}

Snack VendingMachine::giveSnack(int slotNumber)
{
	return slots[slotNumber].giveSnack();
}

void VendingMachine::showProducts()
{
	cout << "Состояние автомата: " << endl;
	snacksCount = 0;
	for (int i = 0; i < _size; ++i)
	{
		cout << "Слот №" << i;
		slots[i].slotShow();
		snacksCount += slots[i].getSnackCount();
	}
	cout << "Всего батончиков в автомате: " << snacksCount << endl << endl;
}

bool VendingMachine::isEmpty()
{
	if (_slotsCount == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool VendingMachine::isFilled()
{
	if (_slotsCount == _size)
	{
		return true;
	}
	else
	{
		return false;
	}
}

