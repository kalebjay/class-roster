#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "degree.h"
#include "student.h"

class NetworkStudent : public student {
public:
	void setDegreeType(string toSetDegreeType);
	string GetDegreeType() const;
	virtual getDegreeProgram();
private:
	string degreeType;
}




