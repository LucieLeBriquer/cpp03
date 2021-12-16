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

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	fragTrap("Fraggy");
	ScavTrap	scavTrap("Scavvy");
	
	scavTrap.attack("random human");
	scavTrap.guardGate();
	fragTrap.attack("random alien");
	fragTrap.highFivesGuys();
	fragTrap.takeDamage(50);
	fragTrap.beRepaired(30);
	fragTrap.takeDamage(90);
	return (0);
}
