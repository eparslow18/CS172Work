//Elisha Parslow 
//2/22/16
//HW2 EX02 9.6 Quadratic Equations


#include <iostream>
#include "QuadraticEquation.h"
using namespace std;
int main() {

	cout << "Enter an A, B, and C to find out the discriminent. " << endl;

	double a1;
	double b1;
	double c1;

	cin >> a1;
	cin >> b1;
	cin >> c1;

	QuadraticEquation quad(a1, b1, c1);

	cout << "The discriminent is " << quad.getDiscriminent() << endl;
	/*   ---Joseph--- I was incorrect here. I didn't read the problem correctly here. My bad. If the discriminent is 0, then both roots are the same.
					  For instance: x^2+4x+2    the discriminent is 0 and both roots are -2. Because I was wrong when I helped you, not removing points.
	
	*/
	if (quad.getDiscriminent() <= 0)
	{
		cout << "There are no real roots. " << endl;
	}
	else {
		cout << "The roots are " << quad.getRoot1() << " and " << quad.getRoot2() << endl;
	}
	return 0;
}