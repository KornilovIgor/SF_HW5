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
		cout << "В слот добален батончик " << _snacks[_snackCount].getName() << endl;
		++_snackCount;
		_emptySlot = false;
		
	}
}

bool SnackSlot::isEmpty()
{
	return _emptySlot;
}

void SnackSlot::slotShow()
{
	if (_emptySlot)
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
		if (_snackCount == 0)
		{
			_emptySlot = true;
		}
		return _snacks[_snackCount];
	}
}