/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:44:48 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/16 21:48:14 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clapTrap("Clappy");
	ScavTrap	scavTrap("Scavvy");
	
	scavTrap.attack("random human");
	scavTrap.guardGate();
	scavTrap.takeDamage(30);
	scavTrap.beRepaired(10);
	scavTrap.takeDamage(50);
	return (0);
}
