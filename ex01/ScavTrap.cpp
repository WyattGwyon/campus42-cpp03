/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 19:39:34 by clouden           #+#    #+#             */
/*   Updated: 2026/06/03 15:25:29 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/************************
 *  Default Constructor
 ************************/
ScavTrap::ScavTrap() :
	ClapTrap("empty", 100, 50, 20)
{
	std::cout << "ScavTrap Default Constructor called.\n";
}

ScavTrap::ScavTrap(const std::string& name) :
	ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap Default Constructor called.\n";
}
/*********************
 *  Copy Constructor
 *********************/
ScavTrap::ScavTrap(const ScavTrap& scav) :
	ClapTrap(scav.name_, 100, 50, 20)
{
	std::cout << "ScavCopy Constructor called.\n";
}

/*****************************
 *  Copy Assignment Operator
 *****************************/
ScavTrap	&ScavTrap::operator=(const ScavTrap& scav)
{
	if (this != &scav)
	{
		name_ = scav.name_;
		hitPoints_ = scav.hitPoints_;
		energyPoints_ = scav.energyPoints_;
		attackDamage_ = scav.attackDamage_;
	}
	return (*this);
}

/**************
 *  Destrutor
 **************/
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destrcutor called.\n";
}

/************
 *  Methods
 ************/
void	ScavTrap::attack(const std::string& target)
{
	std::cout	<< "ScavTrap " << name_
				<< " attacks " << target
				<< " causing " << attackDamage_
				<< " damage!"
				<< std::endl;
	energyPoints_ -= 1;
}

void	ScavTrap::guardGate()
{
	if (energyPoints_ <= 0)
	{
		std::cout << "ScavTrap " << name_ << " is tired and sleeps through the watch.\n";
		return;
	}
	if (hitPoints_ <= 0)
	{
		std::cout << "ScavTrap " << name_ << "'s lifeless body cannot be bother to guard anything.\n";
		return;
	}
	std::cout	<< "ScavTrap " << name_
				<< " is guarding the gate."
				<< std::endl;
}
