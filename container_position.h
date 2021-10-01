#pragma once
#include <ostream>

#include "my_list.h"
#include "position.h"

class container_position
{
	my_list<position> positions_;
public:
	container_position() = default;
	void add_position(const position& position);

	position get_position(int id);

	my_list<position> get_all_positions() const;

	void print(std::ostream& stream);
};
