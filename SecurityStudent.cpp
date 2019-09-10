#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "degree.h"
#include "student.h"
#include "SecurityStudent.h"

void SecurityStudent::setDegreeType(string toSetDegreeType) {
	degreeType = toSetDegreeType;
	return;
}

string SecurityStudent::GetDegreeType() const {
	return degreeType;

}

virtual void SecurityStudent::getDegreeProgram() {
	//call degree.h somehow to get the degree info
	return;