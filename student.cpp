#include <iostream>
#include <string>
using namespace std;

#include "degree.h"
#include "student.h"

//mutators (or setters)
void student::SetStudentID(string studentIDToSet) {
	studentID = studentIDToSet;
	return;
}

void student::SetFirstName(string firstNameToSet) {
	firstName = firstNameToSet;
	return;
}

void student::SetLastName(string lastNameToSet) {
	lastName = lastNameToSet;
	return;
}

void student::SetEmailAddress(string emailAddressToSet) {
	emailAddress = emailAddressToSet;
	return;
}

void student::SetAge(int ageToSet) {
	age = ageToSet;
	return;
}

void student::SetNumDayCompCrs(int numberOfDaysToCompleteCourse) {
	numDayCompCrs = numberOfDaysToCompleteCourse;
	return;
}

void student::SetDegreeType(string degreeTypeToSet) {
	degreeType = degreeTypeToSet;
	return;
}

//accessors (or getters)
string student::GetStudentID() const {
	return studentID;
}

string student::GetFirstName() const {
	return firstName;
}

string student::GetLastName() const {
	return lastName;
}

string student::GetEmailAddress() const {
	return emailAddress;
}

int student::GetAge() const {
	return age;
}

int student::GetnumDayCompCrs() const {
	return numDayCompCrs;
}

string student::GetDegreeType() const {
	return degreeType;
}

//constructor
student::student() {
	studentID = "00";
	firstName = "no name";
	lastName = "no name";
	emailAddress = "no email";
	age = 0;
	int* numDayCompCrs[10] = {};
	degreeType = "default";
	return;
}

virtual void student::print(); {
	cout << " " << endl;

	return;
}

virtual void student::getDegreeProgram() {
	// 2f from instructions
	// left blank to be overiden by other functions of subclasses 
	//       NetworkStudent, SecurityStudent, and SoftwareStudent
	return;
}

//destructor
student::~student() {
	delete classRosterArray;
	return;
}











