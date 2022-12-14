//------------------------------------------------------------------------------
// Pr15-19.cpp
// 
// Author: Gaddis 9E pp.964-967
// 
// This program demonstrates the CsStudent class.
// 
// CsStudent is derived from the abstract base class Student.
//------------------------------------------------------------------------------
#include <iostream>

#include "CsStudent.h"

using std::cout;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

	// Create a CsStudent object for a student.
	CsStudent student("Jennifer Haynes", "167W98337", 2006);

	student.setMathHours(12);  // Student has taken 12 Math hours
	student.setCsHours(20);    // Studeht has taken 20 CS hours
	student.setGenEdHours(40); // Student has taken 40 Gen Ed hours

	// Display the number of remaining hours.
	cout << "The student " << student.getName()
		<< " needs to take " << student.getRemainingHours()
		<< " more hours to graduate.\n";

	return 0;
}