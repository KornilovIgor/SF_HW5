#pragma once
#include <iostream>

class Snack
{
public:
	Snack(const std::string& name);
	Snack(const std::string& name, double priceValue);
	Snack(const std::string& name, double priceValue, int energyValue);
	~Snack() = default;

	void setName(const std::string& name);
	void setPrice(double value);
	void setEnergy(int value);

	std::string getName() const;
	double getPrice() const;
	int getEnergy() const;

private:
	std::string _name;
	double _price;
	int _energy;
};