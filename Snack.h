#pragma once
#include <iostream>
using namespace std;

class Snack
{
public:
	Snack();
	Snack(string snackName);
	Snack(string snackName, float priceValue);
	Snack(string snackName, float priceValue, short energyValue);
	~Snack();

	void setName(string snackName);
	void setPrice(float priceValue);
	void setEnergy(unsigned short energyValue);

	string getName();
	float getPrice();
	unsigned short getEnergy();

private:
	string name = "";
	float price = 0;
	short energy = 0;
};