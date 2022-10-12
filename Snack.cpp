#include "Snack.h"

Snack::Snack(string snackName)
{
	name = snackName;
	price = 0;
	energy = 0;
}

Snack::Snack(string snackName, float priceValue)
{
	name = snackName;
	price = priceValue;
	energy = 0;
}

Snack::Snack(string snackName, float priceValue, short energyValue)
{
	name = snackName;
	price = priceValue;
	energy = energyValue;
}

Snack::~Snack()
{
}

void Snack::setName(string snackName)
{
	name = snackName;
}

void Snack::setPrice(float priceValue)
{
	price = priceValue;
}

void Snack::setEnergy(unsigned short energyValue)
{
	energy = energyValue;
}

string Snack::getName()
{
	return name;
}

float Snack::getPrice()
{
	return price;
}

unsigned short Snack::getEnergy()
{
	return energy;
}