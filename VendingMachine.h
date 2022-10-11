#pragma once
#include <iostream>
using namespace std;

class VendingMachine
{
public:
	VendingMachine(int maxCountSlots);

	int getEmptySlotsCount();

private:
	int size = 0;
	int emptySlotsCount = 0;
};