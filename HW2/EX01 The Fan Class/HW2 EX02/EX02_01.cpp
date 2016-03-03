//Elisha Parslow
//2/18/16
//EX02_01 The Fan Class 9.2

#include <iostream>
#include "Fan.h"
using namespace std;

	int main(){

		Fan fan1;
		Fan fan2;
		Fan fan3;
		//cout << fan2.getOn() << endl;
		//fan2.setOn(true); //cannot cout a setter function, must recall getter function to see changed value (see below) 
		//cout << fan2.getOn();

		cout << "The default fan is at speed " << fan1.getSpeed() << ". It is set to " << fan1.getOn() << " which is equal to false " << endl << "It's radius is " << fan1.getRadius() << endl;

		fan2.setSpeed(2);
		cout << "Fan 2's speed is " << fan2.getSpeed() << endl;
		fan3.setSpeed(3);
		cout << "Fan 3's speed is " << fan3.getSpeed() << endl;



	return 0; 
}