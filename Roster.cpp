#pragma
#include <iostream>
#include <string>
using namespace std;

#include "degree.h"
#include "student.h"
#include "SecurityStudent.h"
#include "NetworkStudent.h"
#include "SoftwareStudent.h"
#include "Roster.h"

void roster::add(string studentID, string firstName, string lastName, string emailAddress, 
	int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, string degreeType) {
	//needs to set the instance variables from part D1 and updates the roster.
	return;
}

void roster::remove(string studentID) {
	//removes students from the roster by student ID. If the student ID does not exist, 
	//the function prints an error message indicating that the student was not found.
	return;
}

void roster::printAll() {
	/*
	prints a complete tab-separated list of student data using accessor functions 
	with the provided format: 
	1 [tab] First Name: John [tab] Last Name: Smith [tab] 
	Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. 
	The printAll() function should loop through all  the students in classRosterArray 
	and call the print() function for each student.
	*/

	return;
}

void roster::printDaysInCourse(string studentID) {
	//correctly prints a student’s average number of days in the three courses. 
	//The student is identified by the studentID parameter.
	return;
}

void roster::printInvalidEmails() {
	/*
	verifies student email addresses and displays all invalid email addresses to the user
 
        Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
	*/
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
	return;
}