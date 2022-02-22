/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:29:44 by lle-briq          #+#    #+#             */
/*   Updated: 2022/02/22 16:12:39 by lle-briq         ###   ########.fr       */
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
	std::cout << YELLOW << embed(name) << END << "Let's get this party started!" << std::endl;
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
	std::cout << RED << embed(_name) << END << "I'm too pretty to die! No, nononono NO!" << std::endl;
}

/* 
**		OVERLOAD OPERATORS
*/

ClapTrap	&ClapTrap::operator=(const ClapTrap &clapTrap)
{
	if (this != &clapTrap)
	{
		this->_name = clapTrap._name;
		this->_hitPoints = clapTrap._hitPoints;
		this->_energyPoints = clapTrap._energyPoints;
		this->_attackDamage = clapTrap._attackDamage;
	}
	return (*this);
}

/* 
**		MEMBER FUNCTIONS
*/

void	printImpossibleAction(std::string name, std::string action, std::string color, std::string reason)
{
	std::cout << name << " can't " << color << action << END << " since " << reason << std::endl;
}

void	ClapTrap::attack(const std::string &target) 
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << ORANGE << embed(_name) << END << "Heyyah! Let's attack " << target << "! (-" << _attackDamage << "HP)" << std::endl;
		_energyPoints -= 1;
	}
	else if (_energyPoints > 0)
		printImpossibleAction(_name, "attack", ORANGE, "he's dead");
	else
		printImpossibleAction(_name, "attack", ORANGE, "he has no energy left");
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		std::cout << PURPLE << embed(_name) << END << "Why do I even feel pain?! (-" << amount << "HP)" << std::endl;
		_hitPoints = max(_hitPoints - amount, 0);
		if (_hitPoints == 0)
			std::cout << "\tOh no " << _name << " is dead..." << std::endl;
	}
	else
		printImpossibleAction(_name, "take damage", PURPLE, "he's dead");
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << GREEN << embed(_name) << END << "Sweet life juice! (+" << amount << "HP)"<< std::endl;
		_hitPoints += amount;
		_energyPoints -= 1;
	}
	else if (_energyPoints > 0)
		printImpossibleAction(_name, "be repaired", GREEN, "he's dead");
	else
		printImpossibleAction(_name, "be repaired", GREEN, "he has no energy left");
}
