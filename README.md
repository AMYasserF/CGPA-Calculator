# CGPA Calculator

## Overview
The **CGPA Calculator** is a C++ program that calculates a student's **Cumulative Grade Point Average (CGPA)** and **Semester GPA** based on user input. The program utilizes **Object-Oriented Programming (OOP)** principles to manage courses and semesters efficiently.

## Features
- Allows users to input multiple semesters and their respective courses.
- Calculates **Semester GPA** based on course grades and credit hours.
- Computes the **Cumulative GPA (CGPA)** across all semesters.
- Displays a formatted report including individual course details, semester GPAs, and total credits.

## Technologies Used
- **C++**
- **Object-Oriented Programming (OOP)**


## Installation & Usage
1. **Clone the repository**
   ```sh
   git clone https://github.com/AMYasserF/CGPA-Calculator.git
   cd CGPA-Calculator
   ```
2. **Compile the program**
   ```sh
   g++ -o cgpa_calculator src/*.cpp
   ```
3. **Run the program**
   ```sh
   ./cgpa_calculator
   ```

## Example Input & Output
### Sample Input
```
Enter The Number of Semesters: 2

Semester 1
Enter The Number of Course for The Semester: 2

COURSE 1
Enter Course Name: Math
Enter GPA Letter EX: A+,B,C- : A
Enter Course Credit Hours: 3

COURSE 2
Enter Course Name: Physics
Enter GPA Letter EX: A+,B,C- : B+
Enter Course Credit Hours: 4

Semester 2
Enter The Number of Course for The Semester: 1

COURSE 1
Enter Course Name: Programming
Enter GPA Letter EX: A+,B,C- : A-
Enter Course Credit Hours: 3
```

### Sample Output
```
------------------------------------------------------------
| Cumulative GPA:                         | 3.73         |
| Cumulative Credit:                      | 10          |
------------------------------------------------------------

Semester 1 - GPA: 3.80
Semester 1 - Credit: 7
------------------------------------------------------------
| Course Name         | Grade      | Credit Hours |
------------------------------------------------------------
| Math               | 4.00       | 3           |
| Physics           | 3.30       | 4           |
------------------------------------------------------------

Semester 2 - GPA: 3.70
Semester 2 - Credit: 3
------------------------------------------------------------
| Course Name         | Grade      | Credit Hours |
------------------------------------------------------------
| Programming       | 3.70       | 3           |
------------------------------------------------------------
```

## Contributing
Feel free to fork this repository and submit pull requests with improvements!

