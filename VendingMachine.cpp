#include "VendingMachine.h"
#include "SnackSlot.h"
#include "Snack.h"

VendingMachine::VendingMachine(int maxCountSlots)
{
	size = maxCountSlots;
	emptySlotsCount = maxCountSlots;
}

int VendingMachine::getEmptySlotsCount()
{
	return emptySlotsCount;
}
