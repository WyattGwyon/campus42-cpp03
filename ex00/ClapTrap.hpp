/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 22:11:22 by clouden           #+#    #+#             */
/*   Updated: 2026/06/02 19:59:45 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
private:
	std::string	name_;
	unsigned int	hitPoints_;
	unsigned int	energyPoints_;
	unsigned int	attackDamage_;

public:
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& clap);
	ClapTrap	&operator=(const ClapTrap& clap);
	~ClapTrap(void);

	unsigned int	getHitPoints() const;
	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	unsigned int	getEnergyPoints() const;
};

#endif
