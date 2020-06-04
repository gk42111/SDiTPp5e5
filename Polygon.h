#pragma once
#include <string>
#include<sstream>

using namespace std;
class Polygon
{
protected:
	int NumbersOfSides;
	double* Sides;
	int X, Y;
public:
	Polygon();
	Polygon(int X, int Y);
	Polygon(int NumberOfSides, int X, int Y);
	double Perimeter();
	virtual double Area() = 0;
	virtual void PrintData() = 0;
	~Polygon();
};
