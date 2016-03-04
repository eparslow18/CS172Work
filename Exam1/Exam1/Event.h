#pragma once
#ifndef EVENT_H
#define EVENT_H

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