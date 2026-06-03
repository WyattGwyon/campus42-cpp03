/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:54:00 by clouden           #+#    #+#             */
/*   Updated: 2026/06/03 17:37:02 by clouden          ###   ########.fr       */
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
	ClapTrap(name + "_clap_name", 100, 50, 30),
	name_(name)
{
	std::cout << "Diamond Constructor called.\n";
}

DiamondTrap::DiamondTrap(const std::string& name, const int hp, const int ep, const int ad) :
	ClapTrap(name + "_clap_name", hp, ep, ad)
{
	std::cout << "Diamond Constructor called.\n";
}

/*********************
 *  Copy Constructor
 *********************/
DiamondTrap::DiamondTrap(const DiamondTrap& diam) :
	ClapTrap(diam.name_ + "clap_trap"),
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
DiamondTrap	&DiamondTrap::operator=(const DiamondTrap& diam)
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
	ScavTrap::attack(target);
}

void	DiamondTrap::whoami()
{
	std::cout << "DiamondTrap name: " << DiamondTrap::name_ << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::name_ << std::endl;
}

