#pragma once
#include "Polygon.h"


class Rectangle : public Polygon
{
private:
	double Side;
	double obwod;
	double pole = 2;
public:
	Rectangle(int X, int Y, double Side);
	~Rectangle();
	double Area();
	void PrintData();
	friend ostream& operator<<(ostream& wyjscie, const Rectangle& s);
};
