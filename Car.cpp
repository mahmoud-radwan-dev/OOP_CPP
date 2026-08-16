#include "Car.h"

Car::Car(string mak, int mo, string col): maker(mak), model(mo), color(col)
{
}

void Car::setMaker(string makerName) {
	maker = makerName;
}
string Car::getMaker() {
	return maker;
}

void Car::setModel(int mod)
{
	model = mod;
}

int Car::getModel()
{
	return model;
}

void Car::setColor(string colorName)
{
	color = colorName;
}

string Car::getColor()
{
	return color;
}

