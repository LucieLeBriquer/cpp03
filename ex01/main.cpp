/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:44:48 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/16 18:44:48 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scavTrap("Scavvy");
	ClapTrap	clapTrap("Clappy");
	
	scavTrap.attack(clapTrap.getName());
	scavTrap.guardGate();
	return (0);
}
