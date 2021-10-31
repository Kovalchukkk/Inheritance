#include "Student.h"
#include <iostream>
#include <string>
using namespace std;
Student::Student(string name, int age, string group) : Person (name, age)
{
	Group = group;
}

void Student::WriteToConsole()
{
	cout << "Student: " << Name << " " << Age << " " << Group << endl;
}
