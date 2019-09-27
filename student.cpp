#include <iostream>
#include <string>
using namespace std;

#include "degree.h"
#include "student.h"

//mutators (or setters)
void Student::SetStudentID(string studentID) {
	studentID = studentID;
	return;
}

void Student::SetFirstName(string firstName) {
	firstName = firstName;
	return;
}

void Student::SetLastName(string lastName) {
	lastName = lastName;
	return;
}

void Student::SetEmailAddress(string email) {
	email = email;
	return;
}

void Student::SetAge(int age) {
	age = age;
	return;
}

void Student::SetNumDayCompCrs(int* days) {
	days = days;
	return;
}

void Student::SetDegreeType(Degree degreeType) {
	degreeType = degreeType;
	return;
}

//accessors (or getters)
string Student::GetStudentID() const {
	return studentID;
}

string Student::GetFirstName() const {
	return firstName;
}

string Student::GetLastName() const {
	return lastName;
}

string Student::GetEmailAddress() const {
	return emailAddress;
}

int Student::GetAge() const {
	return age;
}

int Student::GetNumDayCompCrs() const {
	return days;
}

Degree student::GetDegreeType() const {
	return degreeType;
}

Student::Student(string studentID, string firstName, string lastName, string email, int age, int* days, Degree degreeType) {
	studentID = studentID;
	firstName = firstName;
	lastName = lastName;
	email = email;
	age = age;
	SetNumDayCompCrs(days);
	degreeType = degreeType;
	return;
}

virtual void Student::print(); {
	//  1[tab] First Name : John[tab] Last Name : Smith[tab]
	//	Age : 20[tab]daysInCourse : {35, 40, 55} Degree Program : Security.
	cout << "\tFirst Name : \t" << firstName << "Last Name : \t" << lastName <<
		"Age : \t" << age << "Days In Course : \t" << days << "Degree Program : " << degreeType << endl;
	return;
}

virtual void Student::getDegreeProgram() {
	// 2f from instructions
	// left blank to be overiden by other functions of subclasses 
	//       NetworkStudent, SecurityStudent, and SoftwareStudent
	return;
}

//destructor
Student::~Student() {
	
	
}











