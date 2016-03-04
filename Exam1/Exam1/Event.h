#pragma once
#ifndef EVENT_H
#define EVENT_H
#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"

using namespace std;

class Event {
private: 
	int time;
	string title;

public: 
	Event();
	Event(int time, string name);
	int getTime();
	string getTitle();
	void setTime(int t);
	void setTitle(string name);

};

#endif // !EVENT_H