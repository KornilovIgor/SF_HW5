#include "VendingMachine.h"

const int slotCount = 10;

int main() {
	setlocale(LC_ALL, "");

	int slotCount = 10;

	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10);
	SnackSlot* slot1 = new SnackSlot(10);

	slot->addSnack(bounty);
	slot->addSnack(snickers);
	slot->addSnack(snickers);

	bounty->setEnergy(133);
	bounty->setPrice(120);
	snickers->setEnergy(157);
	snickers->setPrice(125);

	VendingMachine* machine = new VendingMachine(slotCount);

	machine->addSlot(slot);

	machine->showProducts();
	
	cout << "Пустых слотов: " << machine->getEmptySlotsCount();

	delete machine;
	delete slot1;
	delete slot;
	delete snickers;
	delete bounty;
}