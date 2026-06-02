/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:32:35 by clouden           #+#    #+#             */
/*   Updated: 2026/06/02 21:38:24 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	crag("The Cragheart");
	ScavTrap	scav("The Inox Shaman");
	FragTrap	frag("The Valwrath");

	if (crag.getHitPoints() && crag.getEnergyPoints())
	{
		crag.attack("The Inox Shaman");
		scav.takeDamage(crag.getAttackDamage());
		crag.beRepaired(1);
	}
	else
		std::cout << "The Cragheart is tired or dying. He's too lazy to find out.\n";

	if(scav.getHitPoints() && scav.getEnergyPoints())
	{
		scav.attack("The Cragheart");
		crag.takeDamage(scav.getAttackDamage());
		scav.beRepaired(1);
		scav.guardGate();
	}
	else
		std::cout << "The Inox Shaman is tired or dying. He's too lazy to find out.\n";

	if (frag.getHitPoints() && frag.getEnergyPoints())
	{
		frag.attack("The Inox Shaman");
		scav.takeDamage(frag.getAttackDamage());
		frag.beRepaired(1);
		frag.highFivesGuys();
	}
	else
		std::cout << "The Valwrath is tired or dying. He's too lazy to find out.\n";
}
