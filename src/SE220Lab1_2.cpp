//============================================================================
// Name        : SE220Lab1_2.cpp
// Author      : Joshua Galbraith
// Version     :
// Copyright   : This is copyrighted under SoalerGaming
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	double length=0;
	double width=0;
	do
	{
		cout << "Please enter a length and width. Number must be between 0.0 and 20.0." << endl;
		cin >> length >> width;
		if ((length < 0.0) || (length > 20.0))
		{
			cout << "Length out of bounds. Please try again."<< endl;
		}
		if ((width < 0.0) || (width > 20.0))
		{
			cout << "Width out of bounds. Please try again." << endl;
		}
	}while ((length < 0.0) || (length > 20.0) || (width < 0.0) || (width > 20.0));
	cout << length << "\n" << width << endl;
	Rectangle rect(length, width);
}
