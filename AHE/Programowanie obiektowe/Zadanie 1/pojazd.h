#ifndef POJAZD_H
#define POJAZD_H
#pragma once
class Pojazd {

private:
	int wheelNumber;

public:
	int GetWheelNumber();
	void setWheelNumber(int val);

	Pojazd();
	virtual ~Pojazd();
};
#endif
