/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 19:24:08 by clouden           #+#    #+#             */
/*   Updated: 2026/06/02 21:49:54 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/************************
 *  Default Constructor
 ************************/
FragTrap::FragTrap(const std::string& name) :
	ClapTrap(name)
{
	hitPoints_ = 100;
	energyPoints_ = 100;
	attackDamage_ = 20;
	std::cout << "FragTrap Default Constructor called.\n";
}

/*********************
 *  Copy Constructor
 *********************/
FragTrap::FragTrap(const FragTrap& frag) :
	ClapTrap(frag.name_)
{
	hitPoints_ = 100;
	energyPoints_ = 100;
	attackDamage_ = 20;
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
	std::cout << "FragTrap says: \"Hey guys, how bout a HIGH-FIVE!\"\n";
}
