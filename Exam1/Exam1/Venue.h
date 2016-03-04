#pragma once
#ifndef VENUE_H
#define VENUE_H
#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"

using namespace std;

class Venue {
private: 
	int numEvents;
	Event scheduledEvents[];
	bool validTime(int time);
public:
	Venue();
	void addEvent(int time, string name);
	Event findEvent(int time);
	Event findEvent(string name);

};

#endif //!VENUT_H