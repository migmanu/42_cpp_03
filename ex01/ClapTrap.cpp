/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:08:54 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/15 13:11:25 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(10)
{
	std::cout << "- ClapTrap default void constructor init" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(10)
{
	std::cout << "- ClapTrap " << _name << " parameterized constructor init"
		<< std::endl;
	return;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "- ClapTrap destructor init" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &src) : _name(src._name)
{
	std::cout << "- ClapTrap copy constructor init" << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "- ClapTrap copy assignment operator init" << std::endl;
	_name = rhs._name;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0)
	{
		std::cout << "- ClapTrap " << _name << " cannot attack: no energy points"
			<< std::endl;
		return;
	}
	if (_hitPoints <= 0)
	{
		std::cout << "- ClapTrap " << _name << " cannot attack: no hit points"
			<< std::endl;
		return;
	}
	_energyPoints--;
	std::cout
		<< "- ClapTrap " << _name << " attacks " << target << " causing "
		<< _attackDamage << " points of damage" << std::endl;
	std::cout << "Hit points left: " << _hitPoints << std::endl;
	std::cout << "Energy points left: " << _energyPoints << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	std::cout
		<< "- ClapTrap " << _name << " takes " << amount
		<< " points of damage " << std::endl;
	std::cout << "Hit points left: " << _hitPoints << std::endl;
	std::cout << "Energy points left: " << _energyPoints << std::endl;
	return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0)
	{
		std::cout << "- ClapTrap " << _name << " cannot heal: no energy points"
			<< std::endl;
		return;
	}
	if (_hitPoints <= 0)
	{
		std::cout << "- ClapTrap " << _name << " cannot heal: no hit points"
			<< std::endl;
		return;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout
		<< "- ClapTrap " << _name << " heals " << amount
		<< " hit points " << std::endl;
	std::cout << "Hit points left: " << _hitPoints << std::endl;
	std::cout << "Energy points left: " << _energyPoints << std::endl;
	return;
}

int ClapTrap::dealDamage(void)
{
	if (_hitPoints <= 0 || _energyPoints <= 0)
		return 0;
	return _attackDamage;
}
