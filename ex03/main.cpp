/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:32:35 by clouden           #+#    #+#             */
/*   Updated: 2026/06/03 11:30:46 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	crag("The Cragheart");
	ScavTrap	scav("The Inox Shaman");
	FragTrap	frag("The Valwrath");
	DiamondTrap	diam("Melkor");

	if (crag.getEnergyPoints() > 0 && crag.getHitPoints() > 0)
	{
		crag.attack("The Inox Shaman");
		scav.takeDamage(crag.getAttackDamage());
	}
	else
		std::cout << "The Cragheart is lacks all motivation to lift a finger.\n";
	
	if (scav.getEnergyPoints() > 0 && scav.getHitPoints() > 0)
	{
		scav.attack("The Cragheart");
		crag.takeDamage(scav.getAttackDamage());
	}
	else
		std::cout << "The Inox Shaman is smelling the daisies.\n";

	if (frag.getEnergyPoints() > 0 && frag.getHitPoints() > 0)
	{
		frag.attack("The Inox Shaman");
		scav.takeDamage(frag.getAttackDamage());
	}
	else
		std::cout << "The Valwrath is in Valhalla.\n";

	if (diam.getEnergyPoints() > 0 && diam.getHitPoints() > 0)
	{
		diam.whoami();
		diam.attack("The Valwrath");
		frag.takeDamage(diam.getAttackDamage());
	}
	else
		std::cout << "Melkor does care anymore.\n";
}
