#include "ApplicationManager.h"
#include "Semester.h"
#include <iomanip>
#include <cstdlib>

void ApplicationManager::setSemesters(vector<Semester*>& Semesters)
{

		for (int i = 0; i < Semesters.size(); i++)
		{
			cout << "\nSemester " << i + 1 << endl;
			int courses;
			cout << "Enter The Number of Course for The Semester: ";
			cin >> courses;
			Semester* semester = new Semester(courses);

			for (int j = 0; j < courses; j++)
			{
				cout << "\nCOURSE " << j + 1 << endl;

				string courseName;
				string gpa;
				int creditHours;


				cout << "\tEnter Course Name: ";
				cin >> courseName;
				cout << "\tEnter GPA Letter EX: A+,B,C- : ";
				cin >> gpa;
				cout << "\tEnter Course Credit Hours: ";
				cin >> creditHours;

				Course* course = new Course(courseName, gpa, creditHours);
				if (course->getGrade() == INVALID)
				{
					cout << "INVALID INPUT!";
					exit(0);
				}
				semester->addCourse(course);

			}
			Semesters[i] = semester;
		}
}

float ApplicationManager::SemesterGPA(Semester*& semester)
{
	float gpa = 0;

	for (int i = 0; i < semester->getCourseCount(); i++)
	{
		gpa += (semester->getCourses()[i])->getCreditHours() * (semester->getCourses()[i])->getGrade();
	}
	gpa /= semester->getTotalCreditHours() * 10;
	semester->setGPA(gpa);
	return gpa;
}

void ApplicationManager::setSemestersGPA(vector<Semester*>& Semesters)
{
	for (int i = 0; i < Semesters.size(); i++)
	{
		SemesterGPA(Semesters[i]);
	}
}

float ApplicationManager::CGPA(vector<Semester*>& Semesters)
{
	float CGPA = 0;
	for (int i = 0; i < Semesters.size(); i++)
	{
		CGPA += Semesters[i]->getGPA() * Semesters[i]->getTotalCreditHours();
	}
	CGPA /= Semester::getOverAllCreditHours();
	return CGPA;
}

void ApplicationManager::generateReport(const vector<Semester*>& Semesters,const float cgpa)
{
	
		cout << "\n------------------------------------------------------------\n";
		cout << "| " << left << setw(40) << "Cumulative GPA: " << setw(10) << fixed << setprecision(2) << cgpa << "|\n";
		cout << "| " << left << setw(40) << "Cumulative Credit: " << setw(10) << Semester::getOverAllCreditHours() << "|\n";
		cout << "------------------------------------------------------------\n\n";

		for (size_t i = 0; i < Semesters.size(); i++) {
			cout << "Semester " << i + 1 << " - GPA: " << fixed << setprecision(2) << Semesters[i]->getGPA() << endl;
			cout << "Semester " << i + 1 << " - Credit: " << Semesters[i]->getTotalCreditHours() << endl;
			cout << "------------------------------------------------------------\n";
			cout << "| " << left << setw(20) << "Course Name"
				<< "| " << setw(10) << "Grade"
				<< "| " << setw(10) << "Credit Hours" << "|\n";
			cout << "------------------------------------------------------------\n";

			for (int j = 0; j < Semesters[i]->getCourseCount(); j++) {
				Course* course = Semesters[i]->getCourses()[j];
				cout << "| " << left << setw(20) << course->getName()
					<< "| " << setw(10) << course->getGrade() / 10
					<< "| " << setw(10) << course->getCreditHours() << "|\n";
			}

			cout << "------------------------------------------------------------\n\n";
		}
	}



