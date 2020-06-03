#ifndef __JOSEPHUS_H__
#define __JOSEPHUS_H__
#include "person.h" 
#include <vector>

using namespace std;

class JosephusRing
{
public:
	JosephusRing();
	JosephusRing(unsigned, unsigned);
	~JosephusRing();
	void append(Person);
	vector<Person> ringSort();

private:
	vector<Person> people_;
	unsigned current_id_;
	unsigned step_;
};

#endif // !__JOSEPHUS_H__
