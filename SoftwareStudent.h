#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "degree.h"
#include "student.h"

class student::SoftwareStudent {
public:
	void setDegreeType(string toSetDegreeType);
	string GetDegreeType() const;
	virtual getDegreeProgram();

private:
	string degreeType;
};