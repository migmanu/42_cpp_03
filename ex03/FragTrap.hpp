/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:21:30 by jmigoya-          #+#    #+#             */
/*   Updated: 2024/03/11 21:02:00 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
  public:
	// Constructors-destructors
	FragTrap(void);
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap(const FragTrap &src);

	// Overloaded operators
	FragTrap &operator=(const FragTrap &rhs);

	// Public member functions
	void highFivesGuys(void);
	void attack(const std::string &target);

  private:
	int _highFives;
};
