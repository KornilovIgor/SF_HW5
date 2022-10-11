#include "VendingMachine.h"
#include "SnackSlot.h"
#include "Snack.h"

const int slotCount = 10;

int main() {
	setlocale(LC_ALL, "");

	Snack* bounty = new Snack("Bounty");
	cout << "Создан Баунти: " << bounty << endl;
	Snack* snickers = new Snack("Snickers");
	cout << "Создан Сникерс: " << snickers << endl;
	SnackSlot* slot = new SnackSlot(10/*количество батончиков, которые помещаются в слот*/);
	slot->addSnack(bounty); //Добавляем батончик в слот
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(slotCount /*Количество слотов для снеков*/);
	//machine->addSlot(slot); // Помещаем слот обратно в аппарат


	//cout << machine->getEmptySlotsCount(); // Должно выводить количество пустых слотов для снеков
	//delete machine;
	delete slot;
	delete snickers;
	delete bounty;
}