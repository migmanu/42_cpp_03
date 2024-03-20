#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>
#include <ostream>

int main(void)
{
	DiamondTrap crazy("crazy");
	DiamondTrap dead("dead");

	dead.whoAmI();
	dead.guardGate();
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
