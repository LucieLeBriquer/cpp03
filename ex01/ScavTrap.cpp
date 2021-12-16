/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:47:54 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/16 19:09:27 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

static void	initMsg(std::string name)
{
	std::cout << embed(name) << "You want me? To join you? I am SO excited. We will be best friends." << std::endl;
}

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

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
	*this = scavTrap;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << embed(_name) << "I have many regrets!" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scavTrap)
{
	(void)scavTrap;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << embed(_name) << "Gate keeper mode activated!" << std::endl;
}
