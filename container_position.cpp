#include "container_position.h"
#include <iostream>
#include <exception>

void container_position::add_position(const position& position)
{
	positions_.push_back(position);
}

position container_position::get_position(int id)
{
	for (position pos : positions_)
	{
		if (pos.id() == id)
		{
			return pos;
		}
	}
	throw std::exception();
}

my_list<position> container_position::get_all_positions() const
{
	return positions_;
}

void container_position::print(std::ostream& stream)
{
	for (const position& pos : positions_)
	{
		stream << "id: " << pos.id() << std::endl
			<< "name: " << pos.name() << std::endl
			<< "salary: " << pos.salary() << std::endl
			<< "obligations: " << pos.obligations() << std::endl
			<< "reqs: " << pos.requirements() << std::endl << std::endl;
	}
}
