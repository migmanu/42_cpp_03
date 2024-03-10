/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:08:45 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/24 21:03:58 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <ostream>
#include <string>

class ClapTrap
{
  public:
	// Constructors-destructors
	ClapTrap(void);
	ClapTrap(std::string name);
	~ClapTrap(void);
	ClapTrap(const ClapTrap &src);

	// Overloaded operators
	ClapTrap &operator=(const ClapTrap &rhs);

	// Private member functions
  private:
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	int dealDamage(void);

  protected:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
};

#endif
