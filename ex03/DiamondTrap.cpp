/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:28:04 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/20 16:34:53 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "- DiamondTrap default void constructor init" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
	ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name") 
{
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "- DiamondTrap " << _name << " parameterized constructor init"
		<< std::endl;
	return;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "- DiamondTrap destructor init" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src._name), ScavTrap(src._name), FragTrap(src._name)
{
	std::cout << "- DiamondTrap copy constructor init" << std::endl;
	return;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
	std::cout << "- DiamondTrap copy assignment operator init" << std::endl;
	_name = rhs._name;
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "- DiamondTrap " << _name << " says: My name is " << ClapTrap::_name << "!" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	FragTrap::attack(target);
}
