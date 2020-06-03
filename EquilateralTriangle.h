#pragma once
#include "Triangle.h"
class EquilateralTriangle : public Triangle
{
private:
	double Side;
public:
	EquilateralTriangle(int, int, double);
	double Area();
	~EquilateralTriangle();
	void PrintData();
};
