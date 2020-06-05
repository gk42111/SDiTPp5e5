#pragma once
#include "Polygon.h"
class Triangle : public Polygon
{
protected:
	double Height;
public:
	Triangle();
	Triangle(int, int);
	Triangle(int, int, double);
	double Area();
	~Triangle();
	void PrintData();
};