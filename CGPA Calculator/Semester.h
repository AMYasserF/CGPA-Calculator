#ifndef SEMESTER_H
#define SEMESTER_H
#include "Course.h"


class Semester
{
private:
	static int overAllCreditHours; // Tracks total credit hours across all semesters
	static const int MAX_COURSES = 10; // Maximum courses per semester
	int courseCount; // Total courses in this semester
	int totalCreditHours; // Total credit hours for this semester
	int crrntCourseCount;
	float gpa;
	Course** courses = new Course * [MAX_COURSES];

public:
	Semester(int courses);
	void addCourse(Course* course);
	const int getCourseCount();
	const int getTotalCreditHours();
	static const int getOverAllCreditHours();
	void setGPA(float GPA);
	const float getGPA();
	Course** getCourses();
	~Semester();

};


#endif

