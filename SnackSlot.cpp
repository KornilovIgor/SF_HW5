#include "SnackSLot.h"
#include <iostream>
using namespace std;

SnackSlot::SnackSlot()
{
}

SnackSlot::SnackSlot(short const size) : _size(size)
{
	_snacks = new Snack [_size];
}

SnackSlot::~SnackSlot()
{
	delete[] _snacks;
}

short SnackSlot::getSize()
{
	return _size;
}

short SnackSlot::getSnackCount()
{
	return _snackCount;
}

void SnackSlot::addSnack(const Snack* const snack)
{
	if (_snackCount < _size)
	{
		_snacks[_snackCount] = *snack;
		++_snackCount;
	}
}

bool SnackSlot::isEmpty()
{
	if (_snackCount == 0)
	{ 
		return true;
	}
	return false;
}

void SnackSlot::slotShow()
{
	if (isEmpty())
	{
		cout << " | пустой слот" << endl;
	}
	else
	{
		for (int i = 0; i < _snackCount; ++i)
		{ 
			cout << " | " << _snacks[i].getName();
		}
		cout << " | " << endl;
	}
}

Snack SnackSlot::giveSnack()
{
	if (_snackCount > 0)
	{
		_snackCount--;
		return _snacks[_snackCount];
	}
}