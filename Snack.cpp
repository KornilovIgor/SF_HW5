#include "Snack.h"

Snack::Snack()
{
}

Snack::Snack(string snackName)
{
	name = snackName;
}

Snack::Snack(string snackName, float priceValue)
{
	name = snackName;
	price = priceValue;
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