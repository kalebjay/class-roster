#pragma once
#include <string>
#include "degree.h"

class Student {
public:
	//Setters
	void SetStudentID(string studentID);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetEmailAddress(string email);
	void SetAge(int age);
	void SetNumDayCompCrs(int* days);
	void SetDegreeType(Degree degreeType);
	//Getters
	string GetStudentID() const;
	string GetFirstName() const;
	string GetLastName() const;
	string GetEmailAddress() const;
	int GetAge() const;
	int* GetNumDayCompCrs() const;
	Degree GetDegreeType() const;
	
	Student(string studentID, string firstName, string lastName, string email, int age, int* days, Degree degreeType);
	virtual void print();
	virtual Degree getDegreeProgram();
	~Student();

private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int days[3];
	Degree degreeType;

};




