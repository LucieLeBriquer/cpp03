/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:29:40 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/16 17:39:56 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define ORANGE "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE "\x1B[36m"
# define END "\033[0m"
# include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &clapTrap);
		ClapTrap(std::string name);
		~ClapTrap();

		ClapTrap	&operator=(const ClapTrap &clapTrap);

		void	attack(std::string const &target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

std::string	embed(const std::string name);

#endif
