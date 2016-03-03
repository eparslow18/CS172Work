#pragma once

/*   ---Joseph---   Remember to include header definition guards. This is really important in larger projects. Just get in the habbit of doing it in all header files.  (-1)*/

class Fan {
private:
	int speed;
	bool on;
	double radius;

public:
	Fan() //no arg constructor 
	{
		speed = 1;
		on = false;
		radius = 5;
	}

	double getRadius() //getter functions (accessor fxns)
	{
		return radius;
	}

	int getSpeed()
	{
		return speed;
	}

	bool getOn()
	{
		return on;
	}

	void setSpeed(int newSpeed) { //setter functions (mutator fxns)
		speed = newSpeed;
	}

	void setRadius(double newRadius) {
		radius = newRadius;
	}

	void setOn(bool newOn) {
		on = true;
	}
};