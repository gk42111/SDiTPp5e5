#pragma once
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
	~Polygon();
	virtual double Area() = 0;
	virtual void PrintData() = 0;
};