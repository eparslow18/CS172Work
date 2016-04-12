#pragma once
#ifndef COURSECLASS_H
#define COURSECLASS_H
#include <string>

class Course {
private:
	string courseName;
	string* students;
	int numOfStudents;
	int capacity;

public:
	Course(const string& courseName, int Capacity);
	~Course();
	string getCourseName() const;
	void addStudent(const string& name);
	void dropStudent(const string& name);
	string* getStudents() const;
	int getNumberOfStudents() const;

};

#endif