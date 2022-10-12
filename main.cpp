#include "VendingMachine.h"

const int slotCount = 10;

int main() {
	setlocale(LC_ALL, "");

	int slotCount = 10;

	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10);
	SnackSlot* slot2 = new SnackSlot(10);
	SnackSlot* slot3 = new SnackSlot(10);
	SnackSlot* slot4 = new SnackSlot(10);


	slot->addSnack(bounty);
	slot->addSnack(snickers);

	slot2->addSnack(bounty);
	slot2->addSnack(bounty);

	slot3->addSnack(snickers);

	VendingMachine* machine = new VendingMachine(slotCount);

	machine->addSlot(slot);
	machine->addSlot(slot2);
	machine->addSlot(slot3);
	machine->addSlot(slot4);

	machine->showProducts();
	cout << "Пустых слотов в машине: " << machine->getEmptySlotsCount() << endl << endl;

	short i = 2;
	cout << "Выдан батончик " << (machine->giveSnack(i)).getName()
		<< " из слота №" << i << '.' << endl << endl;;

	machine->showProducts();
	cout << "Пустых слотов в машине: " << machine->getEmptySlotsCount() << endl << endl;

	
	delete machine;
	delete slot4;
	delete slot3;
	delete slot2;
	delete slot;
	delete snickers;
	delete bounty;
}