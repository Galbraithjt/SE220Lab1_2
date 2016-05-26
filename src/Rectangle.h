/*
 * Rectangle.h
 *
 *  Created on: May 26, 2016
 *      Author: soaler
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle
{
public:
	Rectangle(double, double);
	virtual ~Rectangle();

private:
	double length;
	double width;
	void Area() const;
	void Parameter() const;
};

#endif /* RECTANGLE_H_ */
