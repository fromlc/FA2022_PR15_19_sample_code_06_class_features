//------------------------------------------------------------------------------
// CsStudent.cpp : class definition
//------------------------------------------------------------------------------
#include "CsStudent.h"

//------------------------------------------------------------------------------
// Default constructor
//------------------------------------------------------------------------------
CsStudent::CsStudent() : Student() {
	m_mathHours = 0;
	m_csHours = 0;
	m_genEdHours = 0;
}

//------------------------------------------------------------------------------
// Constructor
//------------------------------------------------------------------------------
CsStudent::CsStudent(string n, string id, int year) : Student(n, id, year) {
	m_mathHours = 0;
	m_csHours = 0;
	m_genEdHours = 0;
}

//------------------------------------------------------------------------------
// Sets mathHours
//------------------------------------------------------------------------------
void CsStudent::setMathHours(int mh) {
	m_mathHours = mh;
}

//------------------------------------------------------------------------------
// Sets csHours
//------------------------------------------------------------------------------
void CsStudent::setCsHours(int csh) {
	m_csHours = csh;
}

//------------------------------------------------------------------------------
// Sets genEdHours
//------------------------------------------------------------------------------
void CsStudent::setGenEdHours(int geh) {
	m_genEdHours = geh;
}

//------------------------------------------------------------------------------
// returns the number of hours remaining to be taken
//------------------------------------------------------------------------------
int CsStudent::CsStudent::getRemainingHours() const {
	int reqHours;			// Total required hours
	int remainingHours;		// Remaining hours

	// Calculate the required hours.
	reqHours = MATH_HOURS + CS_HOURS + GEN_ED_HOURS;

	// Calculate the remaining hours.
	remainingHours = reqHours - (m_mathHours + m_csHours + m_genEdHours);

	// Return the remaining hours.
	return remainingHours;
}