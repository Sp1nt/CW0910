#include "Human.h"

Human::Human(string n, int a)
{
	name = n;
	age = a;
}

void Human::InputH()
{
	cout << "Input name: ";
	cin >> name;
	cout << "Input age: ";
	cin >> age;
}

void Human::Print()
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}

string Human::GetName()
{
	return name;
}

int Human::GetAge()
{
	return age;
}
