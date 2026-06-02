/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:32:35 by clouden           #+#    #+#             */
/*   Updated: 2026/06/02 21:18:29 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	crag("The Cragheart");
	ScavTrap	inox("The Inox Shaman");

	if (inox.getEnergyPoints() && inox.getHitPoints())
	{
		inox.attack("The Cragheart");
		crag.takeDamage(inox.getAttackDamage());
		inox.beRepaired(1);
		inox.guardGate();
	}
	else
		std::cout << "The Inox Shaman lays down." << std::endl;
	
	if (crag.getEnergyPoints() && crag.getHitPoints())
	{
		crag.attack("The Inox Shaman");
		inox.takeDamage(crag.getAttackDamage());
		crag.beRepaired(1);
	}
	else
		std::cout << "Cragheart is inert." << std::endl;
}
