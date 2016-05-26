/*
 * Rectangle.cpp
 *
 *  Created on: May 26, 2016
 *      Author: soaler
 */

#include "Rectangle.h"
#include <iostream>
using namespace std;

double l =0;
double w =0;

Rectangle::Rectangle(double length, double width)
{
	l = length;
	w = width;
	Area();
	Parameter();
}

void Rectangle::Area() const
{
	cout << "Rectangle length is " << l  << endl;
	cout << "Rectangle width is " << w << endl;
	cout << "The area of your rectangle is " << l * w << endl;
}
void Rectangle::Parameter() const
{
	cout << "The parameter of your rectangle is " << l + l + w +w << endl;
}

Rectangle::~Rectangle()
{
	cout << "All your rectangles are belong to me\n" << endl;
}

