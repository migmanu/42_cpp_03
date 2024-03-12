/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:13:28 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/12 18:51:33 by jmigoya-         ###   ########.fr       */
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
	void attack(const std::string &target);
	void guardGate(void);
	
};
