#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Student : public virtual Person
{
protected:
	string Group;
public:
	Student(string name = "", int age = 0, string group = "");
	void WriteToConsole();

};

