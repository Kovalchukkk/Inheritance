#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person(string name, int age)
{
	this->Name = name;
	this->Age = age;
}

void Person::WriteToConsole()
{
	cout << "Person: " << Name << " " << "Age: " << Age << endl;
}
