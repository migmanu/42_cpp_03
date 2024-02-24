/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:22:48 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/24 19:51:25 by jmigoya-         ###   ########.fr       */
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
