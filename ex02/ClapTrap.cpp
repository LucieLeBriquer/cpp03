/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:29:44 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/16 21:36:00 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* 
**		USEFUL FUNCTIONS 
*/

std::string	embed(const std::string name)
{
	return ("[" + name + "] ");
}

static void	initMsg(std::string name)
{
	std::cout << YELLOW << embed(name) << END << "*CT* Let's get this party started!" << std::endl;
}

static int	max(int a, int b)
{
	if (a >= b)
		return (a);
	return (b);
}

/* 
**		CONSTRUCTORS AND DESTRUCTOR
*/

ClapTrap::ClapTrap(void) : _name("CL4P-TP"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	initMsg(_name);
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	initMsg(_name);
	*this = clapTrap;
}

ClapTrap::ClapTrap(std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	initMsg(name);
	this->_name = name;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << RED << embed(_name) << END << "*CT* I'm too pretty to die! No, nononono NO!" << std::endl;
}

/* 
**		OVERLOAD OPERATORS
*/

ClapTrap	&ClapTrap::operator=(const ClapTrap &clapTrap)
{
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
	return (*this);
}

/* 
**		MEMBER FUNCTIONS
*/

void	ClapTrap::attack(const std::string &target) const
{
	std::cout << ORANGE << embed(_name) << END << "Heyyah! Let's attack " << target << "! (-" << _attackDamage << ")" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << PURPLE << embed(_name) << END << "Why do I even feel pain?! (-" << amount << ")" << std::endl;
	_energyPoints = max(_energyPoints - amount, 0);
	if (_energyPoints == 0)
		std::cout <<"Oh no little " << _name << " is dead..." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << GREEN << embed(_name) << END << "Sweet life juice! (+" << amount << ")"<< std::endl;
	_energyPoints += amount;
}
