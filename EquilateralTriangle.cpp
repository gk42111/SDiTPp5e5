#include "EquilateralTriangle.h"
#include <cmath>
#include <iostream>

EquilateralTriangle::EquilateralTriangle(int X, int Y, double Side) : Triangle(X,Y)
{
	this->Side = Side;
	Sides = new double[NumbersOfSides];
	for (int i = 0; i < NumbersOfSides; i++)
	{
		Sides[i] = Side;
	}
	o
}

double EquilateralTriangle::Area()
{
	return Side * Side *sqrt(3) / 4;
}

EquilateralTriangle::~EquilateralTriangle()
{
}
std::ostream & operator<<(std::ostream & wyjscie, const EquilateralTriangle & s)
{
	ony:\t" << s.X << " " << s.Y << std::endl << "Obwód\t" << s.obwod << std::endl << "Pole\t" << s.pole << std::endl;
}