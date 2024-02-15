#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>

int main(void)
{
	ClapTrap crazy("crazy");
	ClapTrap peace("peace");
	ClapTrap dead("dead");

	crazy.attack("dead");
	dead.takeDamage(crazy.dealDamage());
	dead.beRepaired(10);

	for (int i = 0; i < 10; i++)
	{
	  std::cout << std::endl;
		peace.beRepaired(10);
		crazy.attack("peace");
		peace.takeDamage(crazy.dealDamage());
	}
	return (0);
}
