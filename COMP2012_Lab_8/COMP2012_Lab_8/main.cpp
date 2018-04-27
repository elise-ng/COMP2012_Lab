#include <iostream>

#include "rectangle.h"
#include "square.h"
#include "test_rectangle.h"
#include "test_square.h"
#include "namespace.h"

using std::cout;
using std::endl;

// TODO
// Part 1
// 
// Return the sum of area of r and s.
// 
double area_sum(const Rectangle& r, const Square& s)
{
	return 0.0;
}

int main()
{
	cout << "Part 1" << endl;

	Rectangle r1(1.0, 2.0, 7.0, 5.0);
	Square s1(5.0, 6.0, 2.0);

	cout << "Area sum of rectangle and square is " << area_sum(r1, s1) << endl << endl;

	cout << "Part 2" << endl;

	// TODO
	// Part 2
	// 
	// Uncomment the following after you finished part 1
	// TestRectangle test_rectangle;
	// test_rectangle.run();

	// TestSquare test_square;
	// test_square.run();

	cout << "Part 3" << endl;

	// TODO
	// Part 3
	// 
	// Your code for part 3

	// Print the info for SlowLib
	
	// Create an iterator from SlowLib, then call the next() function
	

	// Print the info for FastLib
	
	// Create an iterator from FastLib, then call the next() function
	

	return 0;
}