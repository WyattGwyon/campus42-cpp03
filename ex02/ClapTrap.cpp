/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 22:30:28 by clouden           #+#    #+#             */
/*   Updated: 2026/06/03 15:24:21 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/************************
 *  Default Constructor
 ************************/
ClapTrap::ClapTrap() :
	name_("empty"),
	hitPoints_(10),
	energyPoints_(10),
	attackDamage_(0)
{
	std::cout << "ClapTrap Default constructor called.\n";
}

ClapTrap::ClapTrap(const std::string& name) :
	name_(name),
	hitPoints_(10),
	energyPoints_(10),
	attackDamage_(0)
{
	std::cout << "ClapTrap Constructor called.\n";
}

ClapTrap::ClapTrap(const std::string& name, const int hp, const int ep, const int ad)
	:name_(name), hitPoints_(hp), energyPoints_(ep), attackDamage_(ad)
{
	std::cout << "ClapTrap Constructor called.\n";
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
	std::cout << "ClapTrap Copy constructor called.\n";
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
std::string		ClapTrap::getName() const
{
	return (name_);
}

unsigned int	ClapTrap::getHitPoints() const
{
	return (hitPoints_);
}

unsigned int	ClapTrap::getAttackDamage() const
{
	return (attackDamage_);
}

unsigned int	ClapTrap::getEnergyPoints() const
{
	return (energyPoints_);
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout	<< "ClapTrap " << name_
				<< " attacks " << target
				<< " causing " << attackDamage_
				<< " damage!" << std::endl;
	energyPoints_ -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > hitPoints_)
		amount = hitPoints_;
	hitPoints_ -= amount;
	std::cout	<< name_ << "'s health drops to " << hitPoints_ << "!" << std::endl;
}

void	ClapTrap::giveDamage(ClapTrap& clap)
{
	if (hitPoints_ <= 0)
	{
		std::cout	<< name_ << " is dead and cannot attack and must rest in pease."
					<< std::endl;
		return;
	}
	if (energyPoints_ <= 0)
	{
		std::cout	<< name_ << " is exhausted and cannot attack and must rest." << std::endl;
		return;
	}
	attack(clap.getName());
	clap.takeDamage(attackDamage_);
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints_ <= 0)
	{
		std::cout	<< name_ << " is dead and cannot heal and must rest in peace." << std::endl;
		return;
	}
	if (energyPoints_ <= 0)
	{
		std::cout	<< name_ << " is exhausted and cannot heal and must rest." << std::endl;
		return;
	}
	else
	{
		hitPoints_ += amount;
		std::cout	<< name_ << " heals " 
					<< amount << " health and now has "
					<< hitPoints_ << " health!"
					<< std::endl;
		energyPoints_ -= 1;
	}
}

