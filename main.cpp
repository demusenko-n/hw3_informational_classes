#include <iostream>

#include "container_position.h"
using namespace std;
int main()
{
	container_position cont;
	cont.add_position(position(1, "lead", 10000, "some obligations", "some requirements"));
	cont.add_position(position(2, "worker", 2000, "other obligations", "other requirements"));
	cont.print(std::cout);
}
