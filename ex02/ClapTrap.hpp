/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 22:11:22 by clouden           #+#    #+#             */
/*   Updated: 2026/06/02 21:56:52 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
protected:
	std::string	name_;
	unsigned int	hitPoints_;
	unsigned int	energyPoints_;
	unsigned int	attackDamage_;

public:
	ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& clap);
	ClapTrap	&operator=(const ClapTrap& clap);
	~ClapTrap(void);

	unsigned int	getHitPoints() const;
	unsigned int	getAttackDamage() const;
	unsigned int	getEnergyPoints() const;
	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif
