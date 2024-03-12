/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:20:29 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/12 18:22:46 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
  public:
	// Constructors-destructors
	DiamondTrap(void);
	DiamondTrap(std::string name);
	~DiamondTrap(void);
	DiamondTrap(const DiamondTrap &src);

	// Overloaded operators
	DiamondTrap &operator=(const DiamondTrap &rhs);

	// Public member functions
	void attack(const std::string &target);
	void whoAmI(void);

  private:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
};
