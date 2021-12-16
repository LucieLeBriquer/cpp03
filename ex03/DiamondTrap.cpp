/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:27:08 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/16 23:01:27 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* 
**		CONSTRUCTORS AND DESTRUCTOR
*/

DiamondTrap::DiamondTrap(void)
{
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap)
{
	*this = diamondTrap;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ClapTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap(void)
{
	return ;
}

/* 
**		OVERLOAD OPERATORS
*/

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamondTrap)
{
	if (this != &diamondTrap)
	{
		this->_name = diamondTrap._name;
		this->_hitPoints = diamondTrap._hitPoints;
		this->_energyPoints = diamondTrap._energyPoints;
		this->_attackDamage = diamondTrap._attackDamage;
	}
	return (*this);
}

/* 
**		MEMBER FUNCTIONS
*/

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "name(" << _name << ")\tclapName(" << ClapTrap::_name << ")" << std::endl;
}