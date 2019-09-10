#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "degree.h"
#include "student.h"
#include "NetworkStudent.h"

void NetworkStudent::setDegreeType(string toSetDegreeType) {
	degreeType = toSetDegreeType;
	return;
}

string NetworkStudent::GetDegreeType() const{
	return degreeType;

}

virtual void NetworkStudent::getDegreeProgram() {
	//call degree.h somehow to get the degree info
	return;
}




