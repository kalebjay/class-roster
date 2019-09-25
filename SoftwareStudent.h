#pragma once
#include "student.h"

class Student::SoftwareStudent {
public:
	virtual Degree getDegreeProgram();

private:
	Degree degreeType = SOFTWARE;
};