/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:47:54 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/16 21:57:05 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* 
**		USEFUL FUNCTIONS 
*/

static void	initMsg(std::string name)
{
	std::cout << YELLOW << embed(name) << END << "You want me? To join you? I am SO excited." << std::endl;
}

/* 
**		CONSTRUCTORS AND DESTRUCTOR
*/

ScavTrap::ScavTrap(void) : ClapTrap("SC4V-TP")
{
	initMsg(_name);
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	initMsg(_name);
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap)
{
	*this = scavTrap;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << RED << embed(_name) << END << "I have many regrets!" << std::endl;
	return ;
}

/* 
**		OVERLOAD OPERATORS
*/

ScavTrap	&ScavTrap::operator=(const ScavTrap &scavTrap)
{
	if (this != &scavTrap)
	{
		this->_name = scavTrap._name;
		this->_hitPoints = scavTrap._hitPoints;
		this->_energyPoints = scavTrap._energyPoints;
		this->_attackDamage = scavTrap._attackDamage;
	}
	return (*this);
}

/* 
**		MEMBER FUNCTIONS
*/

void	ScavTrap::guardGate(void)
{
	std::cout << BLUE << embed(_name) << END << "Gate keeper mode activated!" << std::endl;
}

void	ScavTrap::attack(const std::string &target) 
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << ORANGE << embed(_name) << END << "Take that " << target << "! (-" << _attackDamage << "HP)" << std::endl;
		_energyPoints -= 1;
	}
	else if (_energyPoints > 0)
		printImpossibleAction(_name, "attack", ORANGE, "he's dead");
	else
		printImpossibleAction(_name, "attack", ORANGE, "he has no energy left");
}
