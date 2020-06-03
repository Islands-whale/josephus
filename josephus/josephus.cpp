#include "josephus.h"

JosephusRing::JosephusRing()
{
	current_id_ = 0;
	step_ = 1;
}

JosephusRing::JosephusRing(unsigned start, unsigned step)
{
	current_id_ = start - 1;
	step_ = step;
}

JosephusRing::~JosephusRing()
{
}

void JosephusRing::append(Person target)
{
	people_.push_back(target);
}

vector<Person> JosephusRing::ringSort()
{
	vector<Person> result;
	unsigned up_bound = people_.size();

	for (unsigned i = 0; i != up_bound; ++i)
	{
		current_id_ = (current_id_ + step_ - 1) % people_.size();
		result.push_back(people_[current_id_]);
		people_.erase(people_.begin() + current_id_);
	}
	return result;
}