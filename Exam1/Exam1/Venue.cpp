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
	scheduledEvents[numEvents];
}

bool Venue::validTime(int time)//use a loop to check all of array
	{
		for (int i = 0; i < numEvents;i++)
		{
			if (scheduledEvents[i].getTime() == time)//if it finds a part that is the same as true,return false to addEvent function
			{
				return false;
			}
		}
		return true;
	}

void Venue::addEvent(int time, string name) {
	if (validTime(time) == true) //validate if the time is avaialble 
	{
		scheduledEvents[time-1].setTime(time);//since its avaible, set the time 
		scheduledEvents[time-1].setTitle(name);//now set the same of the event
		cout << "Event scheduled!"<<endl;
	}
	else
	{
		cout << "Couldn't schedule event :("<<endl;
	}
}

Event Venue::findEvent(int time) {
		return scheduledEvents[time-1];//subtract one to get correct slot and return that of the events

}

Event Venue::findEvent(string name) {//find the name of the event
	int count = 0;//use a while loop to impliment count and 
	while (name != scheduledEvents[count].getTitle() && count <=11 )//when it fits critera, leaves loop and outputs at that number
	{
		count++;
	}
	return scheduledEvents[count];
}




