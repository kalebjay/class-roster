#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "degree.h"
#include "student.h"
#include "SoftwareStudent.h"

void SoftwareStudent::setDegreeType(string toSetDegreeType) {
	degreeType = toSetDegreeType;
	return;
}

string SoftwareStudent::GetDegreeType() const {
	return degreeType;

}

virtual void SoftwareStudent::getDegreeProgram() {
	//call degree.h somehow to get the degree info
	return;
}