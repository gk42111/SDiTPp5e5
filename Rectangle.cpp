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
std::ostream & operator<<(std::ostream & wyjscie, const Rectangle & s)
{
	return wyjscie << "To jest kwadrat\n Po³o¿ony:\t" << s.X << " " << s.Y << std::endl << "Obwód\t" <<  s.obwod << std::endl << "Pole\t" << s.pole << std::endl;
}
