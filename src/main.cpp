#include "VendingMachine.h"

int main() {
	setlocale(LC_ALL, "");

	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(3);
	slot->addSnack(bounty);
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(2);
	machine->addSlot(slot);

	std::cout << "Empty slots count: "
		<< machine->getEmptySlotsCount() << std::endl;

	std::cout << "Snack count: "
		<< machine->getSnacksCount() << std::endl;

	machine->giveSnack();

	std::cout << "Snack count: "
		<< machine->getSnacksCount() << std::endl;

	std::cout << "Empty slots count: "
		<< machine->getEmptySlotsCount() << std::endl;

	machine->giveSnack();

	std::cout << "Snack count: "
		<< machine->getSnacksCount() << std::endl;

	std::cout << "Empty slots count: "
		<< machine->getEmptySlotsCount() << std::endl;

	delete machine;
	delete slot;
	delete snickers;
	delete bounty;

	return 0;
}