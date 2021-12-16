/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:47:54 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/16 21:50:13 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

static void	initMsg(std::string name)
{
	std::cout << YELLOW << embed(name) << END << "*ST* You want me? To join you? I am SO excited." << std::endl;
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

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap)
{
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << RED << embed(_name) << END << "*ST* I have many regrets!" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scavTrap)
{
	(void)scavTrap;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << BLUE << embed(_name) << END << "Gate keeper mode activated!" << std::endl;
}
