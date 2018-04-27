#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "common.h"

class Rectangle {
public:
	Rectangle(double x, double y, double x_len, double y_len) : x(x), y(y), x_len(x_len), y_len(y_len) {};

private:
	double area() const { return x_len * y_len; }

	double x;
	double y;
	double x_len;
	double y_len;
};

#endif