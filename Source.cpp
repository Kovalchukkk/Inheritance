#include "Person.h"
#include "Student.h"
#include "Employee.h"
#include "Postgraduate.h"
#include <iostream>
using namespace std;


void WriteToConsole(Person** others, int size)
{
	for (int i = 0; i < size; i++)
	{
		others[i]->WriteToConsole();
	}
}


int main()
{
	Person person("John", 1);
	Student student("Ann", 20, "PMP-21");

	Person** others = new Person*[] { &person, &student, new Person("Ben", 34), new Employee("Sarah", 30, 30000), new Postgraduate("Sam", 46, "PMP-21", 30000) };

	WriteToConsole(others, 5);

	// person.WriteToConsole();
	// student.WriteToConsole();

	return 0;
}