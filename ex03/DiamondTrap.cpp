/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:54:00 by clouden           #+#    #+#             */
/*   Updated: 2026/05/24 21:24:01 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/************************""
 *  Default Constructor
 ************************/
DiamondTrap::DiamondTrap() :
	ClapTrap()
{
	std::cout << "DiamondTrap Default Constructor called\n";
}

DiamondTrap::DiamondTrap(const std::string& name) :
	ClapTrap(name + "_clap_name"),
	FragTrap(name),
	ScavTrap(name),
	name_(name)
{
	hitPoints_ = FragTrap::hitPoints_;
	energyPoints_ = ScavTrap::energyPoints_;
	attackDamage_ = FragTrap::attackDamage_;
	std::cout << "Diamond Constructor called.\n";
}

/*********************
 *  Copy Constructor
 *********************/
DiamondTrap::DiamondTrap(const DiamondTrap& diam) :
	ClapTrap(diam.name_ + "clap_trap"),
	ScavTrap(diam.name_),
	FragTrap(diam.name_),
	name_(diam.name_)
{
	hitPoints_ = FragTrap::hitPoints_;
	energyPoints_ = ScavTrap::energyPoints_;
	attackDamage_ = FragTrap::attackDamage_;
	std::cout << "Diamond Copy Constructor called.\n";
}

/*****************************
 *  Copy Assignment Operator
 *****************************/
DiamondTrap	&DiamondTrap::operator=(const DiamondTrap)
{
	if (this != &diam)
	{
		name_ = diam.name_;
		hitPoints_ = diam.hitPoints_;
		energyPoints_ = diam.energyPoints_;
		attackDamage_ = diam.attackDamage_;
	}
	return (*this);
}

/**************
 *  Destrutor
 **************/
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called.\n";
}

/************
 *  Methods
 ************/
void	DiamondTrap::attack(const std::string& target)
{
	std::cout << "DiamondTrap disguised as...\n";
	ScavTrap.attack(target);
}

void	DiamondTrap::whoami()
{
	std::cout << "DiamondTrap name: " << DiamondTrap::name_ << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::name_ << std::endl;
}

