#include "Student.h"


Student::Student(string hName, int age, string uName, string adress, string faculty, string spec) : Human(hName, age),University(uName, adress, faculty)
{
	specialty = spec;
	for (int i = 0; i < 5; i++) {
		grades[i] = 1 + rand() % 12;
	}
}


void Student::InputS()
{
	cout << "Input your specialty: ";
	cin >> specialty;
}
void Student::Print()
{
	Human::Print();
	University::Print();
	cout << "Your specialty: " << specialty << endl;
	cout << "Your grades:" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Grade " << i + 1 << ": " << grades[i] << endl;
	}

}


string Student::GetSpeciality()
{
	return specialty;
}



