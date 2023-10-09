#include "University.h"


University::University(string nu, string adr, string fac)
{
	nameU = nu;
	adress = adr;
	faculty = fac;
}

void University::InputU()
{
	cout << "Input university name:: ";
	cin >> nameU;

	cout << "Input address: ";
	cin >> adress;

	cout << "Input fañulty: ";
	cin >> faculty;
}

void University::Print()
{
	cout << "University: " << nameU << endl;
	cout << "Address: " << adress << endl;
	cout << "Faculty: " << faculty << endl;
}


string University::GetNameU()
{
	return nameU;

}
string University::GetAdress()
{
	return adress;
}

string University::GetFaculty()
{
	return faculty;
}




