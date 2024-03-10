/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:13:28 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/02/24 21:04:38 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
  public:
	// Constructors-destructors
	ScavTrap(void);
	ScavTrap(std::string name);
	~ScavTrap(void);
	ScavTrap(const ScavTrap &src);

	// Overloaded operators
	ScavTrap &operator=(const ScavTrap &rhs);

	// Public member functions
	void guardGate(void);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	int dealDamage(void);
	
};
