/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 19:39:34 by clouden           #+#    #+#             */
/*   Updated: 2026/06/02 19:39:26 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/************************
 *  Default Constructor
 ************************/
ScavTrap::ScavTrap(const std::string& name) :
	ClapTrap(name)
{
	std::cout << "ScavTrap Default Constructor called.\n";
	hitPoints_ = 100;
	energyPoints_ = 50;
	attackDamage_ = 20;
}
/*********************
 *  Copy Constructor
 *********************/
ScavTrap::ScavTrap(const ScavTrap& scav) :
	ClapTrap(scav.name_)
{
	std::cout << "ScavCopy Constructor called.\n";
	hitPoints_ = 100;
	energyPoints_ = 50;
	attackDamage_ = 20;
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
	std::cout	<< "ScavTrap " << name_
				<< " is guarding the gate."
				<< std::endl;
}
