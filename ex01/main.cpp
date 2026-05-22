/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:32:35 by clouden           #+#    #+#             */
/*   Updated: 2026/05/21 21:28:12 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	crag("The Cragheart");
	ScavTrap	scav("The Inox Shaman");

	crag.attack("The Inox Shaman");
	scav.takeDamage(crag.getAttackDamage());
	crag.beRepaired(1);
	
	scav.attack("The Cragheart");
	crag.takeDamage(scav.getAttackDamage());
	scav.beRepaired(1);
	scav.guardGate();
}
