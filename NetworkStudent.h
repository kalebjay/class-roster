#pragma once
#include "student.h"

class Student::NetworkStudent {
public:
	virtual Degree getDegreeProgram();

private:
	Degree degreeType = NETWORKING;
};



