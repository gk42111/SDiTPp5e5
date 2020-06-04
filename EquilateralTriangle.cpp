#include "EquilateralTriangle.h"
#include <cmath>
#include <iostream>

EquilateralTriangle::EquilateralTriangle(int X, int Y, double Side) : Triangle(X, Y)
{
	this->Side = Side;
	Sides = new double[NumbersOfSides];
	for (int i = 0; i < NumbersOfSides; i++)
	{
		Sides[i] = Side;
	}
	obwod = Perimeter();
	pole = Area();
}

double EquilateralTriangle::Area()
{
	return Side * Side *sqrt(3) / 4;
}

void EquilateralTriangle::PrintData()
{
	cout << this;
}

EquilateralTriangle::~EquilateralTriangle()
{
}


ostream & operator<<(ostream & wyjscie, const EquilateralTriangle & s)
{
	return wyjscie << "to jest trojkat rownoboczny polozony " << s.X << " " << s.Y << " Pole:" << s.pole << " Obwod: " << s.obwod << std::endl;
}
