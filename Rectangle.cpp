#include<iostream>
#include "Rectangle.h"
Rectangle::Rectangle(int X, int Y, double Side) :Polygon(X, Y)
{
	this->Side = Side;
	NumbersOfSides = 4;
	Sides = new double[4];
	for (int i = 0; i < 4; i++)
	{
		Sides[i] = Side;
	}
	obwod = Perimeter();
	pole = Area();
}
Rectangle::~Rectangle()
{
}
double Rectangle::Area()
{
	return Side * Side;
}

void Rectangle::PrintData()
{
	cout << this;
}

ostream & operator<<(ostream & wyjscie, const Rectangle & s)
{
	return wyjscie << "to jest prostokat polozony " << s.X << " " << s.Y << " Pole:" << s.pole << " Obwod: " << s.obwod << std::endl;
}
