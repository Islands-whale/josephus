#ifndef __PERSON_H__
#define __PERSON_H__
#include <string>

using namespace std;

class Person
{
	friend ostream &operator<<(ostream &, const Person &);

public:
	Person();
	Person(string, unsigned);
	~Person();

private:
	string name_;
	unsigned age_;
};

#endif // !__PERSON_H__
