#include <iostream>
#include <string>
#include "CourseClass.h"
using namespace std;

Course::Course(const string& courseName, int capacity)
{
	int numOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course() {
	delete[] students;
}

string Course::getCourseName() const {
	return courseName;
}

void Course::addStudent(const string& name)
{
	students[numOfStudents] = name;
	numOfStudents++;
}

void Course::dropStudent(const string& name)
{
	students[numOfStudents] 
}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numOfStudents;
}