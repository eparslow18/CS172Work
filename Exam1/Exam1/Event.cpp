//I affirm that all code given below was written solely by me, Elisha Parslow,
//and that any help I received adhered to the rules stated for this exam. 

//Elisha Parslow 
//3/3/2016
//Exam 1 Venue and Events

#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"
using namespace std;

Event::Event() {//no arg constructor
	time = -1;
	title = "free";
}

Event::Event(int time, string name) {//assigning values
	this->time = time;
	this->title = name;
}

int Event::getTime() {//return the time of the event
	return time;
}

string Event::getTitle() {//get the name of the title to display it on the console
	return title;
}

void Event::setTime(int t) {//assigning a name to the specific event
	time = t;
}

void Event::setTitle(string name) {//assigning the title to a specific event
	title = name;
}