#include "position.h"


position::position(int id, std::string name, int salary, std::string obligations, std::string requirements):
	id_(id),
	name_(std::move(name)),
	salary_(salary),
	obligations_(std::move(obligations)),
	requirements_(std::move(requirements))
{  }

int position::id() const
{
	return id_;
}

void position::set_id(int id)
{
	id_ = id;
}

std::string position::name() const
{
	return name_;
}

void position::set_name(const std::string& name)
{
	name_ = name;
}

int position::salary() const
{
	return salary_;
}

void position::set_salary(int salary)
{
	salary_ = salary;
}

std::string position::obligations() const
{
	return obligations_;
}

void position::set_obligations(const std::string& obligations)
{
	obligations_ = obligations;
}

std::string position::requirements() const
{
	return requirements_;
}

void position::set_requirements(const std::string& requirements)
{
	requirements_ = requirements;
}
