/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 19:24:08 by clouden           #+#    #+#             */
/*   Updated: 2026/06/03 16:55:35 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/************************
 *  Default Constructor
 ************************/
FragTrap::FragTrap()
	: ClapTrap("empty", 100, 100, 30)
{
	std::cout << "FragTrap Default Constructor called.\n";
}

FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap Constructor called.\n";
}

FragTrap::FragTrap(const std::string& name, const int hp, const int ep, const int ad)
	: ClapTrap(name, hp, ep, ad)
{
	std::cout << "FragTrap Constructor called.\n";
}

/*********************
 *  Copy Constructor
 *********************/
FragTrap::FragTrap(const FragTrap& frag)
	: ClapTrap(frag.name_, 100, 100, 30)
{
	std::cout << "FragTrap Copy Constructor called.\n";
}

/*****************************
 *  Copy Assignment Operator
 *****************************/
FragTrap	&FragTrap::operator=(const FragTrap& frag)
{
	if (this != &frag)
	{
		name_ = frag.name_;
		hitPoints_ = frag.hitPoints_;
		energyPoints_ = frag.energyPoints_;
		attackDamage_ = frag.attackDamage_;
	}
	return (*this);
}

/**************
 *  Destrutor
 **************/
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called.\n";
}

/************
 *  Methods
 ************/
void	FragTrap::attack(const std::string& target)
{
	std::cout	<< "FragTrap " << name_
				<< " attacks " << target
				<< " causing " << attackDamage_
				<< " damage!"
				<< std::endl;
	energyPoints_ -= 1;
}

void	FragTrap::highFivesGuys(void)
{
	if (hitPoints_ <= 0)
	{
		std::cout << "FragTrap " << name_ << " is too dead to high five.\n";
		return;
	}
	if (energyPoints_ <= 0)
	{
		std::cout << "FragTrap " << name_ << " is too tired to high five.\n";
		return;
	}
	std::cout << "FragTrap says: \"Hey guys, how bout a HIGH-FIVE!\"\n";
}
