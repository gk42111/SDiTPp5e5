#include "Triangle.h"
#include <iostream>
#include <cmath>


Triangle::Triangle()
{
}

Triangle::Triangle(int X, int Y) : Polygon(X, Y)
{
	NumbersOfSides = 3;
	obwod = Perimeter();
	pole = Area();
}

Triangle::Triangle(int X, int Y, double Height) : Polygon(3, X, Y)
{
	this->Height = Height;
	obwod = Perimeter();
	pole = Area();
}

double Triangle::Area()
{
	return Sides[0] * Height / 2;
}

void Triangle::PrintData()
{
	cout << this;
}




Triangle::~Triangle()
{
}

ostream & operator<<(ostream & wyjscie, const Triangle & s)
{
	return wyjscie << "to jest trojkat polozony " << s.X << " " << s.Y << " Pole:" << s.pole << " Obwod: " << s.obwod << std::endl;
}
