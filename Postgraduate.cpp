#include "Postgraduate.h"
#include <iostream>
using namespace std;

Postgraduate::Postgraduate(string name, int age, string group, int salary) : Student(name, age, group), Employee(name, age, salary), Person(name, age)
{
}

void Postgraduate::WriteToConsole()
{
	cout << "Postgraduate: " << Name << " " << Age << " " << Group << " " << Salary << endl;
}
