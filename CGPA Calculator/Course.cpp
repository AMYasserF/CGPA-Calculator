#include "Course.h"
#include <string>


// Converts a string GPA to the corresponding Grade enum
Grade Course::convertToGrade(string& Gpa) 
{
	for (auto &ch : Gpa)
	{
		ch = toupper(ch);
	}
	 if (Gpa.length() == 2)
	{
		char sign = Gpa[1];
		if (sign == '+')
		{
			Gpa = Gpa[0];
			 Gpa+="_PLUS";
		}
		else if (sign == '-')
		{
			Gpa = Gpa[0];
			Gpa += "_MINUS";
		}
	}

	 if (Gpa == "A_PLUS") return A_PLUS;
	 else if (Gpa == "A") return A;
	 else if (Gpa == "A_MINUS") return A_MINUS;
	 else if (Gpa == "B_PLUS") return B_PLUS;
	 else if (Gpa == "B") return B;
	 else if (Gpa == "B_MINUS") return B_MINUS;
	 else if (Gpa == "C_PLUS") return C_PLUS;
	 else if (Gpa == "C") return C;
	 else if (Gpa == "C_MINUS") return C_MINUS;
	 else if (Gpa == "D_PLUS") return D_PLUS;
	 else if (Gpa == "D") return D;
	 else if (Gpa == "F") return F;
	 else return INVALID;

}
const Grade Course::getGrade()
{
	return gpa;
}

const string Course::getName()
{
	return name;
}
// Returns the GPA as a float (e.g., 4.0 instead of 40)
const float Course::getGpa()
{
	return static_cast<float>(gpa)/10;
}
const int Course::getCreditHours()
{
	return creditHours;
}
Course::Course(string Name, string Gpa, int CreditHours)
{
	name = Name;
	gpa = convertToGrade(Gpa);
	creditHours = CreditHours;
}
