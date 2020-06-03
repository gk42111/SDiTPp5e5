#pragma once
#include "Polygon.h"
class Rectangle : public Polygon
{
private:
	double Side;
public:
	Rectangle(int X, int Y, double Side);
	~Rectangle();
	double Area();
	void PrintData();
};
