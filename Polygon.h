#pragma once
#include <string>
using namespace std;
class Polygon
{
protected:
	int NumbersOfSides;
	double* Sides;
	int X, Y;
	double obwod = 0;
	double pole = 0;
public:
	Polygon();
	Polygon(int X, int Y);
	Polygon(int NumberOfSides, int X, int Y);
	double Perimeter();
	~Polygon();
	virtual double Area() = 0;
	virtual void PrintData() = 0;
	friend ostream& operator<<(ostream& wyjscie, const Polygon& s);
};