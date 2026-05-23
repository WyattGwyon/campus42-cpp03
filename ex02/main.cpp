/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:32:35 by clouden           #+#    #+#             */
/*   Updated: 2026/05/23 09:28:15 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	crag("The Cragheart");
	ScavTrap	scav("The Inox Shaman");
	FragTrap	frag("The Valwrath");
	int	n;

	crag.attack("The Inox Shaman");
	scav.takeDamage(crag.getAttackDamage());
	crag.beRepaired(1);
	
	scav.attack("The Cragheart");
	crag.takeDamage(scav.getAttackDamage());
	scav.beRepaired(1);
	scav.guardGate();

	frag.attack("The Inox Shaman");
	scav.takeDamage(frag.getAttackDamage());
	frag.beRepaired(1);
	frag.highFivesGuys();
}
