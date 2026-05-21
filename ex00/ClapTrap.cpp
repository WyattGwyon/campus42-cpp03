/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 22:30:28 by clouden           #+#    #+#             */
/*   Updated: 2026/05/21 13:19:26 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/************************
 *  Default Constructor
 ************************/
ClapTrap::ClapTrap(void) :
	hitPoints_(10),
	energyPoints_(10),
	attackDamage_(0)
{}

/**********************
 *  Name Constructor
 **********************/
ClapTrap::ClapTrap(std::string name) :
	hitPoints_(10),
	energyPoints_(10),
	attackDamage_(0)
{}

/*********************
 *  Copy Constructor
 *********************/
ClapTrap::ClapTrap(const ClapTrap& clap)
	name_(clap.name_),
	hitPoints_(10),
	energyPoints_(10),
	attackDamage_(0)
{}

/*****************************
 *  Copy Assignment Operator
 *****************************/
ClapTrap	&ClapTrap::operator=(const ClapTrap& clap);
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
{}

/************
 *  Methods
 ************/
void	ClapTrap::attack(const std::string& target)
{
	std::cout << name_ + " attacks " + target.name_ + " causing " attackDamage_
		+ " points of damage!" << std::endl;
	target.hitPoints_ -= attackDamage_;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << name_ + "'s health is at " + hitPoints_ << std::endl;
	hitPoints_ -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount);
{
	std::cout << name_ + " heals " + amount + " health points and now has "
		+ hitPoints + " of health!" << std::endl;
	hitPoints_ += amount;
}
