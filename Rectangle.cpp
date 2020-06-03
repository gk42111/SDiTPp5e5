
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
	std::cout << "To jest kwadrat" << std::endl << "Polozony:\t" << X << " " << Y << std::endl << "Obwod:\t" << Perimeter() << std::endl << "Pole:\t" << Area() << std::endl;
}