#include "FragTrap.hpp"
#include <iostream>
#include <ostream>

int main(void)
{
	FragTrap empty;
	FragTrap crazy("crazy");
	FragTrap dead("dead");

	dead.highFivesGuys();
	for (int i = 0; i < 10; i++)
	{
	  std::cout << std::endl;
		crazy.attack("dead");
		dead.takeDamage(crazy.dealDamage());
		dead.beRepaired(10);
	}
	return (0);
}
