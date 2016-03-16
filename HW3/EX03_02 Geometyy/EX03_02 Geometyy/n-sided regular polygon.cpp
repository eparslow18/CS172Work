//Elisha Parslow 
//3/15/2016
//HW3 EX03_02

#include <iostream>
#include "RegularPolygon.h"
using namespace std;
int main() {

	RegularPolygon R1;
	cout << "For the first polygon, the area is " << R1.getArea() << " and the perimeter is " << R1.getPerimeter()<<endl;


	RegularPolygon R2(6, 4);
	cout << "For the second polygon, the area is " << R2.getArea() << " and the perimeter is " << R2.getPerimeter() << endl;

	RegularPolygon R3(10, 4, 5.6, 7.8);
	cout << "For the third polygon, the area is " << R3.getArea() << " and the perimeter is " << R3.getPerimeter() << endl;

	return 0;
}