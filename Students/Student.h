#pragma once

#include<string>
#include"Gender.h"

using namespace std;

struct Student
{
	string firstName;
	string lastName;
	unsigned int yearBirth;
	Gender gender;
	int *markPhysics;
	int *markMath;
	int *markInformatics;
	double allowance;
};

Student consoleInputStudent();