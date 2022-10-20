#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

#include "VendingMachine.h"

int main() {
	setlocale(LC_ALL, "");

	
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(3);
	slot->addSnack(bounty); //Добавляем батончик в слот
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(2);
	machine->addSlot(slot); // Помещаем слот обратно в аппарат

	cout << "Количество пустых слотов для снеков: "
		<< machine->getEmptySlotsCount() << endl; // Должно выводить количество пустых слотов для снеков

	cout << "Количество продуктов в автомате: " 
		<< machine->getSnacksCount() << endl;

	machine->giveSnack();

	cout << "Количество продуктов в автомате: "
		<< machine->getSnacksCount() << endl;

	cout << "Количество пустых слотов для снеков: "
		<< machine->getEmptySlotsCount() << endl;

	machine->giveSnack();

	cout << "Количество продуктов в автомате: "
		<< machine->getSnacksCount() << endl;

	cout << "Количество пустых слотов для снеков: "
		<< machine->getEmptySlotsCount() << endl;

	delete machine;
	delete slot;
	delete snickers;
	delete bounty;

	_CrtDumpMemoryLeaks();
	return 0;
}