#include "ScavTrap.hpp"
#include <iostream>
#include <ostream>

int main(void)
{
	ScavTrap empty;
	ScavTrap crazy("crazy");
	ScavTrap dead("dead");

	dead.guardGate();
	for (int i = 0; i < 10; i++)
	{
	  std::cout << std::endl;
		crazy.attack("dead");
		dead.takeDamage(crazy.dealDamage());
		dead.beRepaired(10);
	}
	return (0);
}
