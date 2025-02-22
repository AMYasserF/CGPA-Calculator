#include "ApplicationManager.h"


int main()
{
	ApplicationManager* app = new ApplicationManager();
	int semesters;
	cout << "Enter The Number of Semesters: ";
	cin >> semesters;
	vector<Semester*>Semesters(semesters);
	app->setSemesters(Semesters);
	app->setSemestersGPA(Semesters);
	float cgpa = app->CGPA(Semesters);
	app->generateReport(Semesters, cgpa);



	
	


	return 0;
}

