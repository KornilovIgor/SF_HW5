#include "Snack.h"
#include <iostream>
using namespace std;

Snack::Snack(const std::string& name)
{
	_name = name;
	_price = 0;
	_energy = 0;
}


Snack::Snack(const std::string& name, double priceValue)
{
	_name = name;
	_price = priceValue;
	_energy = 0;
}

Snack::Snack(const std::string& name, double priceValue, int energyValue)
{
	_name = name;
	_price = priceValue;
	_energy = energyValue;
}

Snack::~Snack() = default;

void Snack::setName(const std::string& name)
{
	_name = name;
}

void Snack::setPrice(double value)
{
	_price = value;
}

void Snack::setEnergy(int value)
{
	_energy = value;
}

string Snack::getName() const
{
	return _name;
}

double Snack::getPrice() const
{
	return _price;
}

int Snack::getEnergy() const
{
	return _energy;
}