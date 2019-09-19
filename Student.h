#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "degree.h"

class student {
public:
	void SetStudentID(string studentIDToSet);
	void SetFirstName(string firstNameToSet);
	void SetLastName(string lastNameToSet);
	void SetEmailAddress(string emailAddressToSet);
	void SetAge(int ageToSet);
	void SetNumDayCompCrs(int numberOfDaysToCompleteCourse);
	void SetDegreeType(string degreeTypeToSet);
	string GetStudentID() const;
	string GetFirstName() const;
	string GetLastName() const;
	string GetEmailAddress() const;
	int GetAge() const;
	int GetnumDayCompCrs() const;
	string GetDegreeType() const;
	virtual print();
	virtual getDegreeProgram();
	~student();

private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse1;
	int daysInCourse2;
	int daysInCourse3;
	string degreeType;

};




