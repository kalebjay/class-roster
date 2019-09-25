#pragma
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "student.h"
#include "SecurityStudent.h"
#include "NetworkStudent.h"
#include "SoftwareStudent.h"
#include "Roster.h"

void roster::add(string studentID, string firstName, string lastName, string emailAddress, 
	int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, string degreeType) {
	//needs to set the instance variables from part D1 and updates the roster.
	//switch or if for Degree to create 
	// create for loop that goes through the size of the classRosterArray and if null ptr do security student for SECURITY etc
	// default, convert days in course from array to 3 integers, 

	return;
}

void roster::remove(string studentID) {
	//removes students from the roster by student ID. If the student ID does not exist, 
	//the function prints an error message indicating that the student was not found.
	if () {
		delete studentID;
	}
	else {
		cout << "Error, Student ID: " << studentID << "not found.";
	}
	return;
}

void roster::printAll() {
	/*loop that prints every student, calls print function on each student
	prints a complete tab-separated list of student data using accessor functions 
	with the provided format: 
	 
	The printAll() function should loop through all  the students in classRosterArray 
	and call the print() function for each student.
	*/
	for (int i = 0, i < sizeof(classRosterArray), i++) {
		student.print();
	}

	return;
}

void roster::printDaysInCourse(string studentID) {
	//correctly prints a student’s average number of days in the three courses. 
	//The student is identified by the studentID parameter.
	return;
}

void roster::printInvalidEmails() {
	//verifies student email addresses and displays all invalid email addresses to the user
    //Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
	if () {

	}
	else if{

	}
	else {

	}

	return;
}

void roster::printByDegreeProgram(int degreeProgram) {
	//prints out student information for a degree program specified by an enumerated type

	return;
}

void main() {
	/*
1.  Create an array of pointers, classRosterArray, to hold the data provided in the studentData table.

2.  Create a student object for each  student in the data table by using the subclasses
	NetworkStudent, SecurityStudent, and SoftwareStudent, and populate classRosterArray.

	   a.  Apply pointer operations when parsing each  set of data identified in the studentData table.
	   b.  Add each student object to classRosterArray

Must acheive the following results:
1.  Print out to the screen, via your application, the course title,
	the programming language used, your student ID, and your name.
2.  Create an instance of the Roster class called classRoster.
3.  Add each student to classRoster.
4.  Convert the following pseudo code to complete the rest of the main() function:
	classRoster.printAll();
	classRoster.printInvalidEmails();
	   -loop through classRosterArray and for each element:
	classRoster.printAverageDaysInCourse(<current_object's student id>);
	classRoster.printByDegreeProgram(SOFTWARE);
	classRoster.remove("A3");
	classRoster.remove("A3");
	   -expected: the above line should print a message saying such a student with this ID was not found.
5.  Call the destructor to release the Roster memory.
*/
	
	Roster classRoster;

	const string studentData[] = { 
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Kaleb,Chatland,kalebjay@gmail.com,32,20,33,19,SOFTWARE"
	}
	
	for (int i = 0, i < sizeof(studentData), i++) {
		
		Degree degreeType;
		istringstream iss(studentData[i]);
		string currentString;
		string tempArr[8];
		int count = 0;
		
		while(getline(iss, currentString, ',')){
			tempArr[count] = currentString;
			count++;
		}
		if (tempArr[8] == "SECURITY") {
			degreeType = SECURITY;
		}
		else if (tempArr[8] == "NETWORKING") {
			degreeType = NETWORKWING;
		}
		else if (tempArr[8] == "SOFTWARE") {
			degreeType = SOFTWARE;
		}
		// 0 = studentID, 1 = firstName, 2 = lastName, 3 = emailAddress,
		// 4 = age, 5 = daysInCourse1, 6 = daysInCourse2, 7 = daysInCourse3, 8 = degreeType
		classRoster.add(tempArr[0], tempArr[1], tempArr[2], tempArr[3], tempArr[4], tempArr[5], tempArr[6], tempArr[7], tempArr[8]);
		

	}

	classRoster.printAll();
	classRoster.printInvalidEmails();
	//loop through classRosterArray and for each element:
	
	classRoster.printAverageDaysInCourse(< current_object's student id>);
	classRoster.printByDegreeProgram(SOFTWARE);
	classRoster.remove("A3");
	classRoster.remove("A3");
	//expected: the above line should print a message saying such a student with this ID was not found.

	

	return;
}