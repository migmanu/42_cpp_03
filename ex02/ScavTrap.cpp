/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:22:48 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/11 20:17:27 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "- ScavTrap default void constructor init" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "- ScavTrap " << _name << " parameterized constructor init"
		<< std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "- ScavTrap destructor init" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src._name)
{
	std::cout << "- ScavTrap copy constructor init" << std::endl;
	return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "- ScavTrap copy assignment operator init" << std::endl;
	_name = rhs._name;
	return *this;
}

void ScavTrap::guardGate(void)
{
	std::cout << "- ScavTrap " << _name << " is guarding the gate" << std::endl;
	return;
}

void ScavTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0)
	{
		std::cout << "- ScavTrap " << _name << " cannot attack: no energy points"
			<< std::endl;
		return;
	}
	if (_hitPoints <= 0)
	{
		std::cout << "- ScavTrap " << _name << " cannot attack: no hit points"
			<< std::endl;
		return;
	}
	_energyPoints--;
	std::cout
		<< "- ScavTrap " << _name << " attacks " << target << " causing "
		<< _attackDamage << " points of damage" << std::endl;
	std::cout << "Hit points left: " << _hitPoints << std::endl;
	std::cout << "Energy points left: " << _energyPoints << std::endl;
	return;
}
