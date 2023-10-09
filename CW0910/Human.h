#pragma once
#include <string>
#include <iostream>
using namespace std;
class Human
{
protected:
	string name;
	int age;
public:
	Human() = default;
	Human(string, int);

	void InputH();
	void Print();

	string GetName();
	int GetAge();
};

