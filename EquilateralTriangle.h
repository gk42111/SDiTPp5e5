#pragma once
#include "Triangle.h"
#include <iostream>
class EquilateralTriangle : public Triangle
{
private:
	double Side;
	double obwod;
	double pole;
public:
	EquilateralTriangle(int,int,double);
	double Area();
	~EquilateralTriangle();
	friend std::ostream & operator<<(std::ostream & wyjscie, const EquilateralTriangle & s);
};

