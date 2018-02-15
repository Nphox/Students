#include "stdafx.h"

using namespace std;

void inputMarks(int* marks, int countMarks) {
	marks = new int[countMarks];
	for (int i = 0; i < countMarks; i++) {
		cin >> marks[i];
	}
}

Student consoleInputStudent() {

	Student student;

	cout << "Input first name: ";
	cin >> student.firstName; cout << endl;

	cout << "Input last name: ";
	cin >> student.lastName; cout << endl;

	cout << "Input year of birth: ";
	cin >> student.yearBirth; cout << endl;

	cout << "Input gender (0 - Male / 1 - Female): ";
	int gender;
	cin >> gender; cout << endl;
	if (gender == 0) {
		student.gender = Male;
	}
	else if(gender == 1)
	{
		student.gender = Female;
	}

	int countMarks;
	cout << "Input count of physics marks: ";
	cin >> countMarks;
	cout << "Input physics marks: ";
	for (int i = 0; i < countMarks; i++) {
		cin >> student.markPhysics[i];
	}

	cout << "Input count of math marks: ";
	cin >> countMarks;
	cout << "Input math marks: ";
	for (int i = 0; i < countMarks; i++) {
		cin >> student.markMath[i];
	}

	cout << "Input count of informatics marks: ";
	cin >> countMarks;
	cout << "Input informatics marks: ";
	for (int i = 0; i < countMarks; i++) {
		cin >> student.markInformatics[i];
	}

	cout << "Input allowance: ";
	cin >> student.allowance; cout << endl;

	return student;
}
