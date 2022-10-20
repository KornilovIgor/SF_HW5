#include "VendingMachine.h"
#include <iostream>
using namespace std;

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

	return 0;
}

/*
V  1. В заголовочных файлах не рекомендуется использовать using, 
	т.к.это может привести к коллизии имен.
V  2. Геттеры должны быть объявлены с использованием const.
V  3. Если объект класса std::string не изменяется в функции, 
	то его необходимо передавать по константной ссылке, например, 
	const std::string& name. Иначе объект будет скопирован, 
	а это дорогостоящая операция.
V  4. Не выдержан единый стиль инициализации полей классов.
V  5. Для вещественных чисел рекомендуется использовать double, 
	т.к.он быстрее.
V  6. Для пустого конструктора / деструктора рекомендуется 
	использовать ключевое слово default.Т.е.,
	вместо ~Snack() {}
	нужно писать
	~Snack() = default;
*/