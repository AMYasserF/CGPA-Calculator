#ifndef APPLICATION_MANAGER
#define APPLICATION_MANAGER
#include <iostream>
#include <vector>
#include "Semester.h"
using namespace std;

class ApplicationManager
{
public:
	void setSemesters(vector<Semester*>& Semesters);
	float SemesterGPA(Semester*& semester);
	void setSemestersGPA(vector<Semester*>& Semesters);
	float CGPA(vector<Semester*>& Semesters);
	void generateReport(const vector<Semester*>& Semesters,const float cgpa);
};


#endif 



