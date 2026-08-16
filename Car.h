#pragma once
#include <String> 
using namespace std;
class Car
{
private:
	string maker;
	int model;
	string color;
public:
	Car(string mak, int mo, string col);
	void setMaker(string makerName);
	string getMaker();
	void setModel(int mod);
	int getModel();
	void setColor(string colorName);
	string getColor();

};
