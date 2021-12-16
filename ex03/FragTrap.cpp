/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 20:53:34 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/16 22:08:12 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* 
**		USEFUL FUNCTIONS 
*/

static void	initMsg(std::string name)
{
	std::cout << YELLOW << embed(name) << END << "*FT* Look out everybody! Things are about to get awesome!" << std::endl;
}

/* 
**		CONSTRUCTORS AND DESTRUCTOR
*/

FragTrap::FragTrap(void) : ClapTrap("FR4G-TP")
{
	initMsg(_name);
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	initMsg(_name);
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap)
{
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << RED << embed(_name) << END << "*FT* Robot down!" << std::endl;
}

/* 
**		OVERLOAD OPERATORS
*/

FragTrap	&FragTrap::operator=(const FragTrap &fragTrap)
{
	if (this != &fragTrap)
	{
		this->_name = fragTrap._name;
		this->_hitPoints = fragTrap._hitPoints;
		this->_energyPoints = fragTrap._energyPoints;
		this->_attackDamage = fragTrap._attackDamage;
	}
	return (*this);
}

/* 
**		MEMBER FUNCTIONS
*/

void	FragTrap::highFivesGuys(void) const
{
	std::cout << BLUE << embed(_name) << END << "High Fives Guys!" << std::endl;
}
