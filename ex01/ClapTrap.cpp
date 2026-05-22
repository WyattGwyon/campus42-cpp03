/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 22:30:28 by clouden           #+#    #+#             */
/*   Updated: 2026/05/22 14:37:53 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/************************
 *  Default Constructor
 ************************/
ClapTrap::ClapTrap(const std::string& name) :
	name_(name),
	hitPoints_(10),
	energyPoints_(10),
	attackDamage_(0)
{
	std::cout << "ClapTrap Default Constructor called.\n";
}

/*********************
 *  Copy Constructor
 *********************/
ClapTrap::ClapTrap(const ClapTrap& clap) :
	name_(clap.name_),
	hitPoints_(10),
	energyPoints_(10),
	attackDamage_(0)
{
	std::cout << "ClapTrap Copy Constructor called.\n";
}

/*****************************
 *  Copy Assignment Operator
 *****************************/
ClapTrap	&ClapTrap::operator=(const ClapTrap& clap)
{
	if (this != &clap)
	{
		name_ = clap.name_;
		hitPoints_ = clap.hitPoints_;
		energyPoints_ = clap.energyPoints_;
		attackDamage_ = clap.attackDamage_;
	}
	return (*this);
}

/**************
 *  Destrutor
 **************/
ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Deconstructor called.\n";
}

/************
 *  Methods
 ************/
unsigned int	ClapTrap::getHitPoints()
{

	return (hitPoints_);
}

unsigned int	ClapTrap::getAttackDamage()
{
	return (attackDamage_);
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout	<< "ClapTrap " << name_
				<< " attacks " << target
				<< " causing " << attackDamage_
				<< " damage!"
				<< std::endl;
	energyPoints_ -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > hitPoints_)
		amount = hitPoints_;
	hitPoints_ -= amount;
	std::cout	<< name_ << "'s health drops to "
				<< hitPoints_ << "!"
				<< std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	hitPoints_ += amount;
	std::cout	<< name_ << " heals "
				<< amount << " health and now has "
				<< hitPoints_ << " health!"
				<< std::endl;
	energyPoints_ -= 1;
}
