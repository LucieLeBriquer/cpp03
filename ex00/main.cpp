/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:27:58 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/16 21:18:23 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clapTrap1("Clappy");
	ClapTrap	clapTrap2("Trappy");
	ClapTrap	clapTrap3;

	clapTrap3 = clapTrap1;
	clapTrap2.attack("random human");
	clapTrap1.takeDamage(5);
	clapTrap1.takeDamage(3);
	clapTrap1.beRepaired(10);
	clapTrap1.takeDamage(50);
	return (0);
}
