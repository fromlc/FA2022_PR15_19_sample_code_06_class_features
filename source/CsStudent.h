//------------------------------------------------------------------------------
// CsStudent.h : class declaration
//------------------------------------------------------------------------------
#ifndef CSSTUDENT_H
#define CSSTUDENT_H

#include "Student.h"

#include <string>

using std::string;

// Constants for required hours
constexpr int MATH_HOURS = 20;   // Math hours
constexpr int CS_HOURS = 40;     // Computer science hours
constexpr int GEN_ED_HOURS = 60; // General Ed hours

class CsStudent : public Student {
private:
	int m_mathHours;    // Hours of math taken
	int m_csHours;      // Hours of Computer Science taken
	int m_genEdHours;   // Hours of general education taken

public:
	// Constructors
	CsStudent();
	CsStudent(string n, string id, int year);

	// Mutator functions
	void setMathHours(int mh);
	void setCsHours(int csh);
	void setGenEdHours(int geh);

	// Overridden getRemainingHours function
	virtual int getRemainingHours() const;
};
#endif  // CSSTUDENT_H