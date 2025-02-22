#include "Semester.h"


int Semester::overAllCreditHours = 0;

Semester::Semester(int coursesnum)
{

	courseCount = coursesnum;
	for (int i = 0; i < MAX_COURSES; i++)
	{
		courses[i] = nullptr;
	}
	totalCreditHours = 0;
	crrntCourseCount = 0;
	gpa = 0;
}
void Semester::addCourse(Course* course)
{
	if (crrntCourseCount < courseCount)
	{
		courses[crrntCourseCount] = course;
		crrntCourseCount++;
	}
	totalCreditHours += course->getCreditHours();
	overAllCreditHours += course->getCreditHours();
}
const int Semester::getCourseCount()
{
	return courseCount;
}
const int Semester::getTotalCreditHours()
{
	return totalCreditHours;
}
const int Semester::getOverAllCreditHours()
{
	return overAllCreditHours;
}
void Semester::setGPA(float GPA)
{
	gpa = GPA;
}
const float Semester::getGPA()
{
	return gpa;
}
Course** Semester::getCourses()
{
	return courses;
}
Semester::~Semester()
{
	for (int i = 0; i < crrntCourseCount; i++) 
	{
		if (courses[i] != nullptr)
		{
			delete courses[i];
			courses[i] = nullptr;
		}
	}
	delete[] courses; 
	courses = nullptr;
}
