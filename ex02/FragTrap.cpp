/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:57:24 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/11 21:03:30 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "- FragTrap default void constructor init" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_highFives = 0;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "- FragTrap " << _name << " parameterized constructor init"
		<< std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_highFives = 0;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << "- FragTrap destructor init" << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src._name)
{
	std::cout << "- FragTrap copy constructor init" << std::endl;
	return;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "- FragTrap copy assignment operator init" << std::endl;
	_name = rhs._name;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "- FragTrap " << _name << " says: Gimme five! (press enter)" << std::endl;
	std::cin.get();
	_highFives++;
	return;
}

void FragTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0)
	{
		std::cout << "- FragTrap " << _name << " cannot attack: no energy points"
			<< std::endl;
		return;
	}
	if (_hitPoints <= 0)
	{
		std::cout << "- FragTrap " << _name << " cannot attack: no hit points"
			<< std::endl;
		return;
	}
	_energyPoints--;
	std::cout
		<< "- FragTrap " << _name << " attacks " << target << " causing "
		<< _attackDamage << " points of damage" << std::endl;
	std::cout << "Hit points left: " << _hitPoints << std::endl;
	std::cout << "Energy points left: " << _energyPoints << std::endl;
	return;
}

