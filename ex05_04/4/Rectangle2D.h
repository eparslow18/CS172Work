#pragma once
class Rectangle2D {
private:
	double height;
	double width;
	double x;
	double y;
public:
	double getY();
	void setY(double y);
	double getX();
	void setX(double x);
	Rectangle2D();
	Rectangle2D(double x, double y, double width, double height);
	const double getArea();
	const double getPerimeter();	
	const bool contains(double x, double y);
	const bool contains(const Rectangle2D &r);
	const bool overlaps(const Rectangle2D &r);


};
