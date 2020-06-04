#pragma once
#include<iostream>
#include<sstream>
#include "Polygon.h"
class Triangle : public Polygon
{
protected:
	double Height;
	double obwod;
	double pole = 2;
public:
	Triangle();
	Triangle(int, int);
	Triangle(int, int, double);
	double Area();
	void PrintData();
	friend ostream& operator<<(ostream& wyjscie, const Triangle& s);
	~Triangle();
};