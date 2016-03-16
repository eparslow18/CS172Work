#include <iostream>
#include <cmath>
#include "RegularPolygon.h"
using namespace std;

RegularPolygon::RegularPolygon() {
	n = 3;
	side = 1;
	x = 0;
	y = 0;
}
RegularPolygon::RegularPolygon(int n, double side)
{
	this->n = n;
	this->side = side;
	x = 0;
	y = 0;
}
RegularPolygon::RegularPolygon(double side, int n, double x, double y)//set the old paremeters to the new ones
{
	this->side = side;
	this->n = n;
	this->x = x;
	this->y = y;
}

void RegularPolygon::setN(double n) {
	this->n = n;
}

double RegularPolygon::getN() {
	return n;
}

void RegularPolygon::setSide(double side) {
	this->side = side;
}

double RegularPolygon::getSide() {
	return side;
}

void RegularPolygon::setY(double y) {
	this->y = y;
}

double RegularPolygon::getY() {
	return y;
}

void RegularPolygon::setX(double x) {
	this->x = x;
}

double RegularPolygon::getX() {
	return x;
}


double RegularPolygon::getArea() {//include cmath for using tangent
	double area = (n * (side * side)) / (4 * tan(3.14159265 / n));
	return area;
}

double RegularPolygon::getPerimeter() {
	double perimeter = side * n;
	return perimeter;
}