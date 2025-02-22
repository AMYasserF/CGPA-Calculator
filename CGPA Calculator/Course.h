#ifndef COURSE_H
#define COURSE_H

#include <iostream>
using namespace std;

// Enum to represent letter grades with corresponding grade points
enum Grade
{
	A_PLUS = 40, A = 40, A_MINUS = 37, B_PLUS = 33, B = 30, B_MINUS = 27,
	C_PLUS = 23, C = 20, C_MINUS = 17, D_PLUS = 13, D = 10, F = 0, INVALID = -1
};
class Course
{
private:
	string name;
	Grade gpa;
	int creditHours; // Credit hours of the course

public:
	Course(string Name, string Gpa, int CreditHours);
	Grade convertToGrade(string& Gpa);// Convert string GPA to Grade enum
	const Grade getGrade();
	const string getName();
	const float getGpa();
	const int getCreditHours();
};

#endif 



