//I affirm that all code given below was written solely by me, Elisha Parslow,
//and that any help I received adhered to the rules stated for this exam. 

//Elisha Parslow 
//3/3/2016
//Exam 1 Venue and Events

#include <iostream>
#include <string>
#include "Venue.h"
#include "Event.h"
using namespace std;

Venue::Venue() {
	numEvents = 12;//size of array
	scheduledEvents[numEvents];//make an array of 12
}

bool Venue::validTime(int time)
	{
		if (scheduledEvents[time].getTime() != -1)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

void Venue::addEvent(int time, string name) {
	if (validTime(time) == true) //validate if the time is avaialble 
	{
		scheduledEvents[time-1].setTime(time);
		scheduledEvents[time-1].setTitle(name);
		cout << "Event scheduled!";
	}
	else
	{
		cout << "Couldn't schedule event.";
	}
}

Event Venue::findEvent(int time) {
		return scheduledEvents[time-1];

}

Event Venue::findEvent(string name) {
	int count = 0;
	while (name != scheduledEvents[count].getTitle() && (count <= 11))
	{
		if (count != 11)
		{
			count++;
		}
	}
	return scheduledEvents[count];
}

//for (int i = 0; i <= 11; i++)
//{
//	
//}


