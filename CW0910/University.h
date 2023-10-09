#pragma once
#include <iostream>
#include <string>
using namespace std;
class University
{
protected:
	string nameU;
	string adress;
	string faculty;
public:
	University() = default;
	University(string, string , string );

	void InputU();
	void Print();

	string GetAdress();
	string GetFaculty();
	string GetNameU();
};
