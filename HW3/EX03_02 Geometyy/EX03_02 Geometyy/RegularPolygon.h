#ifndef REGULARPOLYGON_H
#define REGULARPOLYGON_H

class RegularPolygon
{
private:
	int n;
	double side;
	double x;
	double y;
public:
	RegularPolygon();
	RegularPolygon(int n, double side);
	RegularPolygon(double side, int n, double x, double y);
	void setN(double n);
	double getN();
	void setSide(double side);
	double getSide();
	void setY(double y);
	double getY();
	void setX(double x);
	double getX();
	double getArea();
	double getPerimeter();

};

#endif
