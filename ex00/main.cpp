/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clouden <clouden@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:32:35 by clouden           #+#    #+#             */
/*   Updated: 2026/06/02 21:17:29 by clouden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	crag("the Cragheart");
	ClapTrap	inox("the Inox Scoundrel");

	if (crag.getEnergyPoints() > 0 && crag.getHitPoints() > 0)
	{
		crag.attack("the Inox Scoundrel");
		inox.takeDamage(0);
		inox.beRepaired(1);
	}
	else
		std::cout << "Crag is tired and needs to go to bed." << std::endl;
}
