/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:29:44 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/16 18:22:48 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

static std::string	embed(const std::string name)
{
	return ("(" + name + ") ");
}

static void	initMsg(std::string name)
{
	std::cout << embed(name) << "Let's get this party started!"<< std::endl;
}

ClapTrap::ClapTrap(void) : _name("CL4P-TP"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	initMsg(_name);
	return ;
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
	std::cout << embed(_name) << "I'm too pretty to die! No, nononono NO!" << std::endl;
	return ;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clapTrap)
{
	this->_name = clapTrap.getName();
	this->_hitPoints = clapTrap.getHitPoints();
	this->_energyPoints = clapTrap.getEnergyPoints();
	this->_attackDamage = clapTrap.getAttackDamage();
	return (*this);
}

void	ClapTrap::attack(const std::string &target) const
{
	std::cout << embed(_name) << "\"Heyyah!\"";
	std::cout << " - " << _name << " attack " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) const
{
	std::cout << embed(_name) << "Why do I even feel pain?!" << std::endl;
	std::cout << "\t" << _name << "is taking " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) const
{
	std::cout << embed(_name) << "Sweet life juice!" << std::endl;
	std::cout << "\t" << _name << " is being repaired by " << amount << " points!" << std::endl;
}