#include "pojazd.h"


// konstruktor
Pojazd::Pojazd() {
	wheelNumber = 0;

}

// desktruktor wirtualny
Pojazd::~Pojazd() {

}


int Pojazd::GetWheelNumber() {
	return wheelNumber;
}

void Pojazd::setWheelNumber(int val) {
	wheelNumber = val;
}

