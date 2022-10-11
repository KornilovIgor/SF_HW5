#include "SnackSLot.h"

SnackSlot::SnackSlot(short slotSize)
{
	size = slotSize;
	slot = new Snack[size];
	cout << slot << endl;
}

SnackSlot::~SnackSlot()
{
	delete[] slot;
}

int SnackSlot::addSnack(Snack* snack)
{
	if (snackCount < size)
	{
		slot[snackCount] = *snack;
		cout << "Добавлен снек " << snack->getName() << " в ячейку #" << snackCount << endl;
		++snackCount;
		return 0;//Снек успешно добавлен
	}
	else
	{
		return 1;//Слот заполнен
	}
}

Snack SnackSlot::giveSnack()
{
	if (snackCount > 0)
	{
		snackCount--;
		cout << "Возвращается снек " << slot[snackCount].getName() << endl;
		return slot[snackCount];
	}
}

