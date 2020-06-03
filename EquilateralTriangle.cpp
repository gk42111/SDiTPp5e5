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
}

double EquilateralTriangle::Area()
{
	return Side * Side *sqrt(3) / 4;
}

EquilateralTriangle::~EquilateralTriangle()
{
}
void EquilateralTriangle::PrintData()
{
	std::cout << "To jest trojkat rownoboczny" << std::endl << "Polozony:\t" << X << " " << Y << std::endl << "Obwod:\t" << Perimeter() << std::endl << "Pole:\t" << Area() << std::endl;
}