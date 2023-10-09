#pragma once
#include <iostream>
#include "Human.h"
#include "University.h"
using namespace std;
class Student : public Human, public University
{
	string specialty;
	int grades[5] = {};
public:
	Student() = default;
	Student(string , int , string , string , string , string );

	void InputS();
	void Print();
	
	string GetSpeciality();

};

