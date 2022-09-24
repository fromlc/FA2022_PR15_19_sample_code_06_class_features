//------------------------------------------------------------------------------
// Student.h : class declaration and definition
//
// Author: Gaddis 9E pp.964-967
//------------------------------------------------------------------------------
#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using std::string;

//------------------------------------------------------------------------------
// Student
//------------------------------------------------------------------------------
class Student {
protected:
	string m_name;			// Student name
	string m_idNumber;		// Student ID
	int m_yearAdmitted;		// Year student was admitted
public:
	// Default constructor
	Student() {
		m_name = "";
		m_idNumber = "";
		m_yearAdmitted = 0;
	}

	// Constructor
	Student(string n, string id, int year) {
		set(n, id, year);
	}

	// The set function sets the attribute data.
	void set(string n, string id, int year) {
		m_name = n;				// Assign the name
		m_idNumber = id;			// Assign the ID number
		m_yearAdmitted = year;	// Assign year admitted
	}

	// Accessor functions
	const string getName() const { return m_name; }
	const string getIdNum() const { return m_idNumber; }
	int getYearAdmitted() const { return m_yearAdmitted; }

	// Pure virtual function
	virtual int getRemainingHours() const = 0;
};
#endif  // STUDENT_H