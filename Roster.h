#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "degree.h"
#include "student.h"
#include "SecurityStudent.h"
#include "NetworkStudent.h"
#include "SoftwareStudent.h"

class Roster {
public:
	void add(string studentID, string firstName, string lastName, string emailAddress, 
		int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, string degreeType);
	void remove(string studentID);
	void printAll();
	void printDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(int degreeProgram);
	Student* classRosterArray[5] = { nullptr };
	~Roster();
};




