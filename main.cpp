#include <iostream>
using namespace std;
#include "Car.h"

int main() {                                

	Car C1("Toyota", 2020, "Black");
	Car C2("Fiat", 2021, "Yello");
	cout << "This car is made by " << C1.getMaker() << "\n";
	cout << "This car's model is " << C1.getModel() << "\n";
	cout << "This car is made by " << C2.getMaker() << "\n";
	cout << "This car's model is " << C2.getModel() << "\n";
}