#pragma once
#include <string>

class position
{
	int id_;
	std::string name_;
	int salary_;
	std::string obligations_;
	std::string requirements_;

public:

	

	position(int id, std::string name, int salary, std::string obligations, std::string requirements);

	int id() const;

	void set_id(int id);

	std::string name() const;

	void set_name(const std::string& name);

	int salary() const;

	void set_salary(int salary);

	std::string obligations() const;

	void set_obligations(const std::string& obligations);

	std::string requirements() const;

	void set_requirements(const std::string& requirements);
};
