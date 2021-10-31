#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Employee : public virtual Person
{
protected:
	int Salary;
public:
	Employee (string name = "", int age = 0, int salary = 0);
	void WriteToConsole();

};



