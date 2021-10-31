#pragma once

#include <string>
using namespace std;

class Person
{
protected:
	string Name;
	int Age;

public:
	Person(string name = "", int age = 0);
	virtual void WriteToConsole();
};

