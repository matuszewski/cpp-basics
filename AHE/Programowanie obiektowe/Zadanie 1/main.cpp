#include <iostream>
#include "pojazd.h"

using namespace std;

int main() {
	Pojazd Autobus, Motor, Auto, Statek;

	Autobus.setWheelNumber(6);
	Motor.setWheelNumber(2);
	Auto.setWheelNumber(4);

	cout << Autobus.GetWheelNumber() << endl;
	cout << Motor.GetWheelNumber() << endl;
	cout << Auto.GetWheelNumber() << endl;
	
	// sprawdzenie czy nowy obiekt dostaje liczbe kol (0) z konstruktora
	cout << Statek.GetWheelNumber() << endl;
	return 0;
}
