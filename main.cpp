#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

#include "VendingMachine.h"

int main() {
	setlocale(LC_ALL, "");

	/*
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10);
	slot->addSnack(bounty); //Добавляем батончик в слот
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(5);
	machine->addSlot(slot); // Помещаем слот обратно в аппарат

	cout << machine->getEmptySlotsCount(); // Должно выводить количество пустых слотов для снеков
	
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;*/


	
	int slotCount = 5;

	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");

	SnackSlot* slot1 = new SnackSlot(10);
	SnackSlot* slot2 = new SnackSlot(10);
	SnackSlot* slot3 = new SnackSlot(10);
	SnackSlot* slot4 = new SnackSlot(10);
	SnackSlot* slot5 = new SnackSlot(10);


	slot5->addSnack(bounty);

	slot1->addSnack(snickers);

	slot2->addSnack(bounty);
	slot2->addSnack(bounty);

	slot3->addSnack(snickers);

	VendingMachine* machine = new VendingMachine(slotCount);

	machine->showProducts();

	machine->addSlot(slot1);
	machine->addSlot(slot2);
	machine->addSlot(slot3);
	machine->addSlot(slot4);

	machine->showProducts();
	cout << "Пустых слотов в машине: " << machine->getEmptySlotsCount() << endl << endl;

	cout << "Выдан батончик " << (machine->giveSnack(0)).getName()
		<< " из слота №" << 0 << '.' << endl << endl;;

	machine->showProducts();
	cout << "Пустых слотов в машине: " << machine->getEmptySlotsCount() << endl << endl;

	machine->addSlot(slot5);

	machine->showProducts();
	cout << "Пустых слотов в машине: " << machine->getEmptySlotsCount() << endl << endl;

	delete machine;
	delete slot5;
	delete slot4;
	delete slot3;
	delete slot2;
	delete slot1;
	delete snickers;
	delete bounty;


	_CrtDumpMemoryLeaks();
	return 0;
}