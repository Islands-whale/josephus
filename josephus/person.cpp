#include "person.h"

Person::Person()
{
	name_ = "undefine";
	age_ = 0;
}

Person::Person(string name, unsigned age)
{
	name_ = name;
	age_ = age;
}

Person::~Person()
{
}

ostream &operator<<(ostream &os, const Person &item)
{
	os << item.name_ << "\t" << item.age_;
	return os;
}