#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

Employee::Employee(string name, int age, int salary) : Person(name, age)
{
	this->Salary = salary;
}

void Employee::WriteToConsole()
{
	cout << "Employee: " << Name << " " << Age << " " << Salary << endl;
}
