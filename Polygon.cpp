﻿#include "Polygon.h"
#include <iostream>
Polygon::Polygon()
{
}
Polygon::Polygon(int X, int Y)
{
	this->X = X;
	this->Y = Y;
}
Polygon::Polygon(int NumbersOfSides, int X, int Y)
{
	this->X = X;
	this->Y = Y;
	this->NumbersOfSides = NumbersOfSides;
	Sides = new double[NumbersOfSides];
	for (int i = 0; i < NumbersOfSides; i++)
	{
		std::cout << "Podaj dlugość boku nr \t" << i + 1 << std::endl;
		std::cin >> Sides[i];
	}
	for (int i = 0; i < NumbersOfSides; i++) {
		obwod += Sides[i];
	}

}
double Polygon::Perimeter()
{
	double Perim = 0;
	for (int i = 0; i <
		NumbersOfSides; i++)
	{
		Perim += Sides[i];
	}
	return Perim;
}
Polygon::~Polygon() {}

ostream & operator<<(ostream & wyjscie, const Polygon & s)
{
	return wyjscie << s.X << " " << s.Y << " " <<s.pole<<" "<<s.obwod<< endl;
}
