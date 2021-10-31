#pragma once
#include "Student.h"
#include "Employee.h"

class Postgraduate : public Student, public Employee 
{
public:
	Postgraduate(string name, int age, string group, int salary);
	void WriteToConsole();

};

