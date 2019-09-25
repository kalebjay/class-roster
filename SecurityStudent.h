#pragma once
#include "student.h"

class Student::SecurityStudent {
public:
	virtual Degree getDegreeProgram();

private:
	Degree degreeType = SECURITY;
};




