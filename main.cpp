#include <iostream>
#include "EquilateralTriangle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Polygon.h"
using namespace std;

int main() {
	Polygon *wsk[3];
	wsk[0] = new Triangle(1, 2, 3);
	wsk[1] = new EquilateralTriangle(4, 5, 6);
	wsk[2] = new Rectangle(7, 8, 9);
	for (int i = 0; i < 3; i++) {
		wsk[i]->PrintData();
	}

	system("pause");
	return 0;
}