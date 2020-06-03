#include <iostream>
#include "josephus.h"

int main()
{
	JosephusRing ring(2, 2);
	ring.append(Person("Jorn", 25));
	ring.append(Person("Tom", 30));
	ring.append(Person("Jerry", 35));
	ring.append(Person("Mike", 40));
	vector<Person> ring_sort = ring.ringSort();
	for (auto i : ring_sort)
	{
		cout << i << endl;
	}
	return 0;
}