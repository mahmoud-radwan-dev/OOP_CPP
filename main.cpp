#include <iostream>
using namespace std;
#include "Car.h"

int main() {

	Car C1;
	C1.setMaker("Hona");
	C1.setModel(2018);
	

	cout << "This car is made by " << C1.getMaker() << "\n";
	cout << "This car's model is " << C1.getModel() << "\n";
}