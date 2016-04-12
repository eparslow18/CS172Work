#include <iostream>
#include "Rectangle2D.h"
using namespace std;

Rectangle2D::Rectangle2D() {
	x = 0;
	y - 0;
	width = 1;
	height = 1;	
}
Rectangle2D::Rectangle2D(double x, double y, double width, double height) {
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}

double Rectangle2D::getX() {
	return x;
}

double Rectangle2D::getY() {
	return y;
}

void Rectangle2D::setX(double x) {
	this->x = x;
}

void Rectangle2D::setY(double y) {
	this->y = y;
}

const double Rectangle2D::getArea() {
	return height*width;
}

const double Rectangle2D::getPerimeter() {
	return ((height * 2) + (width * 2));
}

const bool Rectangle2D::contains(double x, double y) {
	double pointX = x;//make new variables to manipulate x and y and keep a the original points
	double pointY = y;
	if (pointX<(this->x+(.5*this->width)) && pointX >(this->x - (.5*this->width)) &&
		pointY < (this->y + (.5*this->height)) && pointY >(this->y - (.5*this->height))) 
	{
		return true;
	}
	else
		return false;
}

const bool Rectangle2D::contains(const Rectangle2D &r) {
	if ((this->x > x - (width / 2) &&    //if r2 X is greater than r1 left line
		this->x < x + (width / 2) &&    //if r2 X is less than r1 right line
		this->y < y - (height / 2) &&   //if r2 Y is less than r1 top line
		this->y > y + (height / 2))  ) //if r2 Y is greater than r1 bottom line 
		{
		return true;
		}
	else
	{
		return false;
	}
}

const bool Rectangle2D::overlaps(const Rectangle2D &r) {

}