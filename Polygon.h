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

	
};

