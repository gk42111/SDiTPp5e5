#pragma once
#include "Triangle.h"
#include<sstream>

class EquilateralTriangle : public Triangle
{
private:
	double Side;
	double obwod;
	double pole = 2;
public:
	EquilateralTriangle(int, int, double);
	double Area();
	void PrintData();
	~EquilateralTriangle();
	friend ostream& operator<<(ostream& wyjscie, const EquilateralTriangle& s);
};
