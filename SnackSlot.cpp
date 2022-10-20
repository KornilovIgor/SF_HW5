#include "SnackSLot.h"
#include <iostream>
using namespace std;

SnackSlot::SnackSlot(short size) 
{	
	_size = size;
	_snackCount = 0;
	_snacks = new Snack* [_size];
}

SnackSlot::~SnackSlot()
{
	delete[] _snacks;
}

short SnackSlot::getSize() const
{
	return _size;
}

short SnackSlot::getSnackCount() const
{
	return _snackCount;
}

void SnackSlot::addSnack(Snack* snack)
{
	if (_snackCount < _size)
	{
		_snacks[_snackCount] = snack;
		++_snackCount;
		cout << "В слот добавлен батончик: " << snack->getName() << endl;
	}
}

void SnackSlot::giveSnack()
{
	if (_snackCount > 0)
	{
		--_snackCount;
		cout << "Выдан батончик: " << _snacks[_snackCount]->getName() << endl;
	}
}