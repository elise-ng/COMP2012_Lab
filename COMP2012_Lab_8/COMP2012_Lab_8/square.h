#ifndef SQUARE_H
#define SQUARE_H

#include "common.h"

class Square {
public:
	Square(double x, double y, double len) : x(x), y(y), len(len) {};

private:
	double area() const { return len * len; }

	double x;
	double y;
	double len;
};

#endif